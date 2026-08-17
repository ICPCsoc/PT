/*
Codeforces 50A - Domino Piling
Source: https://codeforces.com/problemset/problem/50/A

Problem statement (paraphrased):
Place as many 2 by 1 dominoes as possible on an M by N board. Dominoes may
be rotated, must stay inside the board, and cannot overlap. Print the maximum
number that can be placed.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m;
    cin >> n >> m;
    int sum = (n * m) / 2;
    cout << sum << endl;
    return 0;
}
