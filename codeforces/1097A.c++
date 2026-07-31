#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    bool a = false;
    for (int i = 0; i < 5; ++i) {
        string b;
        cin >> b;
        if (b[0] == s[0] || b[1] == s[1]) {
            a = true;
        }
    }
    if (a) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}