/*
Codeforces 85A - Domino
Source: https://codeforces.com/problemset/problem/85/A

Problem statement (paraphrased):
Tile a 4 by n board completely with 1 by 2 dominoes so every grid cut between
adjacent columns crosses at least one domino. If impossible, print -1.
Otherwise output any four-row lowercase-letter colouring of a valid tiling,
using at most 26 colours, where the two cells of each domino share a colour
and distinct side-adjacent dominoes never share one.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    if (!(cin >> a)) return 0;

    if (a == 1) {
        cout << "a\na\nb\nb\n";
        return 0;
    }

    if (a % 2 == 1) {
        cout << "-1\n";
        return 0;
    }

    vector<string> b(4, string(a, ' '));

    for (int c = 0; c < a; c += 2) {
        char d = 'a' + (c / 2) % 6;
        char e = 'g' + (c / 2) % 6;

        if (c % 4 == 0) {
            b[0][c] = b[0][c + 1] = d;
            b[1][c] = d + 1; b[2][c] = d + 1;
            b[1][c + 1] = d + 2; b[2][c + 1] = d + 2;
            b[3][c] = b[3][c + 1] = d + 3;
        } else {
            b[0][c] = e; b[1][c] = e;
            b[0][c + 1] = e + 1; b[1][c + 1] = e + 1;
            b[2][c] = b[2][c + 1] = e + 2;
            b[3][c] = b[3][c + 1] = e + 3;
        }
    }

    for (int c = 0; c < 4; ++c) {
        cout << b[c] << "\n";
    }

    return 0;
}
