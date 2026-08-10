#include "bits/stdc++.h"

using namespace std;

bool num(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_set<string> arr = {
        "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN",
        "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"
    };
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        if (num(temp)) {
            int age = stoi(temp);
            if (age < 18) {
                sum++;
            }
        } 
        else {
            if (arr.count(temp)) {
                sum++;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}