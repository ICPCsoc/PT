/*
Codeforces 118A - String Task
Source: https://codeforces.com/problemset/problem/118/A

Problem statement (paraphrased):
Process a Latin-letter string by deleting every occurrence of A, O, Y, E, U,
or I regardless of case. Convert each remaining consonant to lowercase and
place a dot before it, then print the resulting string.
*/

#include "bits/stdc++.h"
#include <cctype>

using namespace std;

int main (void) {
    string s; cin >> s;
    int n = s.length();
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i') {
            ans += s[i];
        }
    }
    int m = ans.length();
    string name = "";
    for (int i = 0; i < m; i++) {
        string temp =  string(".") + ans[i];
        name += temp;
    }
    cout << name << endl;
    return 0;
}
