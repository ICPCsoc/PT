/*
Codeforces 46A - Ball Game
Source: https://codeforces.com/problemset/problem/46/A

Problem statement (paraphrased):
n children numbered clockwise stand in a circle, with child 1 initially
holding the ball. On throw 1 the ball advances one position, on throw 2 it
advances two positions, and so on, wrapping around the circle. Print the
recipient after each of the n-1 throws.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        sum = (sum + i) % n;
        cout << sum + 1 << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
