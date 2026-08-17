/*
Codeforces 148A - Insomnia Cure
Source: https://codeforces.com/problemset/problem/148/A

Problem statement (paraphrased):
Among dragons numbered 1 through d, every k-th, l-th, m-th, and n-th dragon is
damaged. Count how many distinct dragons are damaged at least once.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int sum = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
