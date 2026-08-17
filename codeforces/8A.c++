/*
Codeforces 8A - Train and Peter
Source: https://codeforces.com/problemset/problem/8/A

Problem statement (paraphrased):
A string lists station colours from city A to city B. Peter reports two
non-empty colour sequences seen during two separate awake periods, in that
order, without reusing a station. Determine whether both sequences can occur
in the required order in the original route, its reverse, both, or neither.
Print forward, backward, both, or fantasy respectively.
*/

#include "bits/stdc++.h"

using namespace std;

bool check(string s, string a, string b) {
    int p1 = s.find(a);
    if (p1 == string::npos) return false;
    int p2 = s.find(b, p1 + a.length());
    return p2 != string::npos;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, a, b;
    if (!(cin >> s >> a >> b)) {
        return 0;
    }
    string r = s;
    reverse(r.begin(), r.end());
    bool f = check(s, a, b);
    bool d = check(r, a, b);
    if (f && d) cout << "both\n";
    else if (f) cout << "forward\n";
    else if (d) cout << "backward\n";
    else cout << "fantasy\n";
    return 0;
}
