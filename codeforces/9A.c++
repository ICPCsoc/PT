/*
Codeforces 9A - Die Roll
Source: https://codeforces.com/problemset/problem/9/A

Problem statement (paraphrased):
Yakko and Wakko rolled Y and W on ordinary six-sided dice. Dot now rolls once
and wins whenever her result is at least both previous results; ties favour
her. Print her winning probability as an irreducible fraction A/B.
*/

#include "bits/stdc++.h"

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    if (!(cin >> x >> y)) return 0;
    int max_val = max(x, y);
    int sum1 = 6 - max_val + 1;
    int sum2 = 6;
    int g = gcd(sum1, sum2);
    cout << sum1 / g << "/" << sum2 / g << "\n";
    return 0;
}
