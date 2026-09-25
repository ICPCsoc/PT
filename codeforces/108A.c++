/*
Codeforces 108A - Palindromic Times
Source: https://codeforces.com/problemset/problem/108/A

Problem statement (paraphrased):
Given a valid 24-hour time in HH:MM format, find the earliest strictly later
time whose four digits form a palindrome. Time wraps to the next day when
necessary. Print the result in the same format.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    string a;
    cin >> a;
    int b = (a[0] - '0') * 10 + (a[1] - '0');
    int c = (a[3] - '0') * 10 + (a[4] - '0');
    
    while (true) {
        c++;
        if (c == 60) {
            c = 0;
            b++;
            if (b == 24) b = 0;
        }
        int d = b / 10;
        int e = b % 10;
        int f = c / 10;
        int g = c % 10;
        
        if (d == g && e == f) {
            cout << d << e << ":" << f << g << endl;
            break;
        }
    }
    return 0;
}