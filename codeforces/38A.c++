/*
Codeforces 38A - Army
Source: https://codeforces.com/problemset/problem/38/A

Problem statement (paraphrased):
There are n army ranks, and moving from rank i to rank i+1 takes d[i] years.
Given a current rank a and a higher target rank b, print the total number of
years required to advance from a to b.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;  cin >> n;
    vector<int> a(n);
    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }
    int b, c; cin >> b >> c;
    int sum = 0;
    for (int i = b ; i < c; i++) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}   
