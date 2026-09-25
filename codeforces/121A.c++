/*
Codeforces 121A - Lucky Sum
Source: https://codeforces.com/problemset/problem/121/A

Problem statement (paraphrased):
A lucky number contains only digits 4 and 7. Define next(x) as the smallest
lucky number greater than or equal to x. Given l and r, compute the sum of
next(x) for every integer x from l through r.
*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    vector<long long> c;
    queue<long long> d;
    d.push(4);
    d.push(7);
    while (!d.empty()) {
        long long e = d.front();
        d.pop();
        c.push_back(e);
        if (e <= 1000000000LL) {
            d.push(e * 10 + 4);
            d.push(e * 10 + 7);
        }
    }
    long long f = 0;
    long long g = a;
    while (g <= b) {
        long long h = *lower_bound(c.begin(), c.end(), g);
        long long i = min(b, h);
        f += h * (i - g + 1);
        g = i + 1;
    }
    cout << f << "\n";
    return 0;
}