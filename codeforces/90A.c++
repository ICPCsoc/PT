/*
Codeforces 90A - Cableway
Source: https://codeforces.com/problemset/problem/90/A

Problem statement (paraphrased):
Cable cars arrive once per minute in the repeating order red, green, blue,
starting with red at time 0. Each carries at most two students and reaches
the top 30 minutes after departure. There are r, g, and b students who will
board only cars of their respective colours. Print the earliest time by which
everyone has reached the top.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    long long d = (a + 1) / 2;
    long long e = (b + 1) / 2;
    long long f = (c + 1) / 2;

    long long t1 = (d > 0) ? (d - 1) * 3 + 0 : -1;
    long long t2 = (e > 0) ? (e - 1) * 3 + 1 : -1;
    long long t3 = (f > 0) ? (f - 1) * 3 + 2 : -1;

    long long max_t = max({t1, t2, t3});

    cout << max_t + 30 << "\n";

    return 0;
}
