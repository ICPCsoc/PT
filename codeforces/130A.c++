/*
Codeforces 130A - Hexagonal Numbers
Source: https://codeforces.com/problemset/problem/130/A

Problem statement (paraphrased):
The n-th hexagonal number is defined as h_n = 2*n*n - n. Given n, print h_n.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    cout << 2 * n * n - n << endl;
    return 0;
}