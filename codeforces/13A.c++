/*
Codeforces 13A - Numbers
Source: https://codeforces.com/problemset/problem/13/A

Problem statement (paraphrased):
For an integer A, compute the sum of its digits when written in every base
from 2 through A-1. Find the average of these digit sums and print it as an
irreducible decimal fraction X/Y. The input satisfies 3 <= A <= 1000.
*/

#include "bits/stdc++.h"

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int recur(int a, int b) {
    int sum = 0;
    while (a > 0) {
        sum += a % b;
        a /= b;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    if (!(cin >> a)) return 0;
    int sum = 0;
    int base = a - 2;
    for (int i = 2; i < a; ++i) {
        sum += recur(a, i);
    }
    int c = gcd(sum, base);
    int num = sum / c;
    int d = base / c;
    cout << num << "/" << d << "\n";
    return 0;
}
