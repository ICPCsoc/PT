/*
Codeforces 110A - Nearly Lucky Number
Source: https://codeforces.com/problemset/problem/110/A

Problem statement (paraphrased):
Given an integer n, count how many of its decimal digits are 4 or 7. Print YES
if that count itself is a positive number consisting only of digits 4 and 7;
otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long a;
    cin >> a;
    int sum = 0;
    long long b = a;
    while (b > 0) {
        int c = b % 10;
        if (c == 4 || c == 7) sum++;
        b /= 10;
    }
    int d = sum;
    if (d == 0) {
        cout << "NO\n";
        return 0;
    }
    while (d > 0) {
        int e = d % 10;
        if (e != 4 && d != 7) {
            cout << "NO\n";
            return 0;
        }
        d /= 10;
    }
    cout << "YES\n";
    return 0;
}
