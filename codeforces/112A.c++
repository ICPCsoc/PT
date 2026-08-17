/*
Codeforces 112A - Petya and Strings
Source: https://codeforces.com/problemset/problem/112/A

Problem statement (paraphrased):
Compare two equal-length Latin-letter strings lexicographically without
distinguishing uppercase from lowercase. Print -1 if the first is smaller, 1
if it is larger, and 0 if they are equal.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z') {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1 << endl;
    } else if (a > b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
