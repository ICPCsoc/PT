/*
Codeforces 14A - Letter
Source: https://codeforces.com/problemset/problem/14/A

Problem statement (paraphrased):
An n by m grid contains shaded '*' cells and unshaded '.' cells, with at
least one shaded cell. Cut out and print the smallest axis-aligned rectangular
subgrid that contains every shaded cell.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) {
        return 0;
    }
    vector<string> name(n);
    for (int i = 0; i < n; ++i) {
        cin >> name[i];
    }
    int min_row = n, max_row = -1;
    int min_col = m, max_col = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (name[i][j] == '*') {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }
    for (int i = min_row; i <= max_row; ++i) {
        for (int j = min_col; j <= max_col; ++j) {
            cout << name[i][j];
        }
        cout << "\n";
    }
    return 0;
}
