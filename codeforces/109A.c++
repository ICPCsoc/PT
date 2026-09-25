/*
Codeforces 109A - Lucky Sum of Digits
Source: https://codeforces.com/problemset/problem/109/A

Problem statement (paraphrased):
A lucky number contains only digits 4 and 7. Given n, find the numerically
smallest lucky number whose digit sum equals n. Print -1 if no such number
exists.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a;
    cin >> a;
    
    for (int b = 0; b * 4 <= a; b++) {
        if ((a - b * 4) % 7 == 0) {
            int c = (a - b * 4) / 7;
            for (int d = 0; d < b; d++) cout << 4;
            for (int d = 0; d < c; d++) cout << 7;
            cout << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}