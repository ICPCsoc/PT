/*
Codeforces 69A - Young Physicist
Source: https://codeforces.com/problemset/problem/69/A

Problem statement (paraphrased):
Given n three-dimensional force vectors acting on a point, determine whether
their vector sum is (0,0,0). Print YES when the body is in equilibrium and
NO otherwise.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void){
    int n;
    cin >> n;
    int x[1000], y[1000], z[1000];
    int sum = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
        sum += x[i];
        sum1 += y[i];
        sum2 += z[i];
    }
    if (sum == 0 && sum1 == 0 && sum2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
