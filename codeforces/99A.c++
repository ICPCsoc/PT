/*
Codeforces 99A - Help Far Away Kingdom
Source: https://codeforces.com/problemset/problem/99/A

Problem statement (paraphrased):
Round a supplied non-negative decimal number to the nearest integer: a
fractional part below 0.5 rounds down and one at least 0.5 rounds up. If the
integer part ends in 9, print GOTO Vasilisa. instead of performing a carry.
Otherwise print the rounded integer without leading zeroes.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    string a;
    cin >> a;
    int b = a.find('.');
    if (a[b - 1] == '9') {
        cout << "GOTO Vasilisa." << endl;
    } else {
        if (a[b + 1] >= '5') {
            a[b - 1]++;
        }
        for (int c = 0; c < b; c++) {
            cout << a[c];
        }
        cout << endl;
    }
    return 0;
}