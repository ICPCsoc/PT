/*
Codeforces 486A - Calculating Function
Source: https://codeforces.com/problemset/problem/486/A

Problem statement (paraphrased):
For a positive integer n, calculate f(n) = -1 + 2 - 3 + 4 - ... with every
odd integer subtracted and every even integer added, through n.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << -(n + 1) / 2 << endl;
    }
    return 0;
}
