/*
Codeforces 7A - Kalevitch and Chess
Source: https://codeforces.com/problemset/problem/7/A

Problem statement (paraphrased):
An 8 by 8 board starts entirely white. In one stroke, an entire row or column
may be painted black. Given a reachable target board containing W and B,
print the minimum number of row and column strokes needed to produce it.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> board(8);
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    int row = 0;
    for (int i = 0; i < 8; i++) {
        bool all = true;
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != 'B') {
                all = false;
                break;
            }
        }
        if (all) {
            row++;
        }
    }
    if (row > 0) {
        cout << row << "\n";
        return 0;
    }
    int col = 0;
    for (int i = 0; i < 8; i++) {
        bool all = true;
        for (int j = 0; j < 8; j++) {
            if (board[j][i] != 'B') {
                all = false;
                break;
            }
        }
        if (all) {
            col++;
        }
    }
    cout << col << "\n";
    return 0;
}
