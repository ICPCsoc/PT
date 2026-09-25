/*
Codeforces 111A - Petya and Inequiations
Source: https://codeforces.com/problemset/problem/111/A

Problem statement (paraphrased):
Given n, x, and y, construct n positive integers whose sum of squares is at
least x while their ordinary sum is at most y. Print one integer per line, or
print -1 if no valid construction exists.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (c < a) {
        cout << -1 << "\n";
        return 0;
    }
    
    long long d = c - (a - 1);
    if (d * d + (a - 1) >= b) {
        cout << d << "\n";
        for (int e = 1; e < a; e++) {
            cout << 1 << "\n";
        }
    } else {
        cout << -1 << "\n";
    }
    
    return 0;
}