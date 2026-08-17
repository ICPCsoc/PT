/*
Codeforces 133A - HQ9+
Source: https://codeforces.com/problemset/problem/133/A

Problem statement (paraphrased):
In HQ9+, the instructions H, Q, and 9 produce output, while + only changes an
accumulator and all other characters are ignored. Given a program, print YES
if executing it produces any output; otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s;
    cin >> s;
    int n = s.size();
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            b = 1;
        }
    }
    if (b == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
