/*
Codeforces 3A - Shortest Path of the King
Source: https://codeforces.com/problemset/problem/3/A

Problem statement (paraphrased):
Given the starting and target squares of a king on a standard chessboard,
move the king to the target using the fewest moves. A move may be horizontal,
vertical, or diagonal by one square. Print the minimum move count followed
by any valid sequence using L, R, U, D, LU, LD, RU, and RD.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    if (!(cin >> s >> t)){
        return 0;
    }
    int x1 = s[0] - 'a';
    int y1 = s[1] - '1';
    int x2 = t[0] - 'a';
    int y2 = t[1] - '1';
    int steps = max(abs(x1 - x2), abs(y1 - y2));
    cout << steps << "\n";
    while (x1 != x2 || y1 != y2){
        string move = "";
        if (x1 < x2){
            move += "R";
            x1++;
        }
        else if (x1 > x2){
            move += "L";
            x1--;
        }
        if (y1 < y2){
            move += "U";
            y1++;
        }
        else if (y1 > y2){
            move += "D";
            y1--;
        }
        cout << move << "\n";
    }
    return 0;
}
