/*
Codeforces 53A - Autocomplete
Source: https://codeforces.com/problemset/problem/53/A

Problem statement (paraphrased):
Given a typed lowercase prefix s and n previously visited addresses, print
the lexicographically smallest listed address that starts with s. If no
address has that prefix, print s itself.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int n;
    cin >> n;
    string match = "";
    for (int i = 0; i < n; ++i) {
        string page;
        cin >> page;
        if (page.length() >= s.length() && page.substr(0, s.length()) == s) {
            if (match.empty() || page < match) {
                match = page;
            }
        }
    }
    if (!match.empty()) {
        cout << match << "\n";
    } 
    else {
        cout << s << "\n";
    }

    return 0;
}
