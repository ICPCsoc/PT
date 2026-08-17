/*
Codeforces 56A - Bar
Source: https://codeforces.com/problemset/problem/56/A

Problem statement (paraphrased):
For each bar customer, only either their age or their drink is known. Count
how many customers must be checked to rule out illegal alcohol use: anyone
known to be under 18 and anyone known to have one of the listed alcoholic
drinks requires checking.
*/

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
