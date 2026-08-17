/*
Codeforces 91A - Newspaper Headline
Source: https://codeforces.com/problemset/problem/91/A

Problem statement (paraphrased):
Take some number of copies of string s1, concatenate them, and delete any
characters while preserving the order of those left. Find the fewest copies
needed to obtain s2 as a subsequence. Print -1 if it is impossible.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    if (!(cin >> a >> b)) return 0;

    vector<vector<int>> c(26);
    for (int d = 0; d < (int)a.size(); ++d) {
        c[a[d] - 'a'].push_back(d);
    }

    int d = 1;
    int e = -1;

    for (char f : b) {
        int u = f - 'a';
        if (c[u].empty()) {
            cout << -1 << "\n";
            return 0;
        }

        auto it = upper_bound(c[u].begin(), c[u].end(), e);
        if (it == c[u].end()) {
            d++;
            e = c[u][0];
        } else {
            e = *it;
        }
    }

    cout << d << "\n";

    return 0;
}
