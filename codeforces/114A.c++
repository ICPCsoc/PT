/*
Codeforces 114A - Cifera
Source: https://codeforces.com/problemset/problem/114/A

Problem statement (paraphrased):
Given integers k and l, determine whether l is an integer power k^p for some
p at least 1. If so, print YES and then p-1, the number called its importance;
otherwise print NO.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long c = a;
    int d = 0;
    while (c < b) {
        c *= a;
        d++;
    }
    if (c == b) {
        cout << "YES\n" << d << "\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}