/*
Codeforces 115A - Party
Source: https://codeforces.com/problemset/problem/115/A

Problem statement (paraphrased):
Each of n employees has either one immediate manager or none, and the resulting
management graph has no cycles. Split all employees into the minimum number of
groups so that no group contains both an employee and any direct or indirect
subordinate. Print that minimum number.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> b(a + 1);
    for (int c = 1; c <= a; c++) {
        cin >> b[c];
    }
    
    int d = 0;
    for (int c = 1; c <= a; c++) {
        int e = 1;
        int f = b[c];
        while (f != -1) {
            e++;
            f = b[f];
        }
        d = max(d, e);
    }
    
    cout << d << "\n";
    return 0;
}