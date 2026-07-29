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