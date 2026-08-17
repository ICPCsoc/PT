/*
Codeforces 4A - Watermelon
Source: https://codeforces.com/problemset/problem/4/A

Problem statement (paraphrased):
Given a watermelon weighing w kilograms (1 <= w <= 100), determine whether
it can be divided into two parts of positive weight such that both weights
are even integers. Print YES if this is possible; otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    if (n % 2 == 0 && n != 2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
