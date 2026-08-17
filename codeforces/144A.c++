/*
Codeforces 144A - Arrival of the General
Source: https://codeforces.com/problemset/problem/144/A

Problem statement (paraphrased):
Soldiers stand in a line with given heights. One operation swaps two adjacent
soldiers. Find the minimum operations needed to place a maximum-height soldier
first and a minimum-height soldier last; the order of everyone else does not
matter.
*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];
    int b = a[0];
    int c = a[0];
    int d = 0;
    int e = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b) {
            b = a[i];
            d = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
            c = a[i];
            e = i;
        }
    }
    int sum = d + (n - 1 - e);
    if (d > e) {
        sum--;
    }
    cout << sum << endl;
    return 0;
}
