/*
Codeforces 61A - Ultra-Fast Mathematician
Source: https://codeforces.com/problemset/problem/61/A

Problem statement (paraphrased):
Read two binary strings of equal length. For every position, output 1 when
the two input digits differ and 0 when they are equal. Preserve all leading
zeroes in the resulting string.
*/

#include "bits/stdc++.h" 

using namespace std;

int main (void) {
    char a[1000], b[1000];
    cin >> a >> b;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == b[i]) {
            cout << '0';
        }
        else {
            cout << '1';
        }
    }
    cout << endl;
    return 0;
}
