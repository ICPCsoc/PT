/*
Codeforces 17A - Noldbach Problem
Source: https://codeforces.com/problemset/problem/17/A

Problem statement (paraphrased):
For given n and k, consider primes not exceeding n that can be written as
p_i + p_(i+1) + 1, where p_i and p_(i+1) are consecutive primes. Print YES
if at least k primes have this property; otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

bool init (int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main (void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> a;
    for (int i = 2; i <= n; i++) {
        if (init(i)) {
            a.push_back(i);
        }
    }
    int sum = 0;
    for (int i = 0; i + 1 < (int)a.size(); i++) {
        int num = a[i] + a[i + 1] + 1;
        if (init(num) && num <= n) {
            sum++;
        }
    }
    if (sum >= m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
