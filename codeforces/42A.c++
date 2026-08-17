/*
Codeforces 42A - Guilty — to the Kitchen!
Source: https://codeforces.com/problemset/problem/42/A

Problem statement (paraphrased):
A soup uses n ingredients in the fixed proportions a[1]:...:a[n]. At most
b[i] litres of ingredient i are available, and the pan holds at most V
litres. Find the greatest total volume of soup that can be made while keeping
the required proportions. Print a real number with sufficient precision.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    double c;
    cin >> n >> c;
    vector<double> a(n), b(n);
    double sum_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    double min_x = c / sum_a;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        min_x = min(min_x, b[i] / a[i]);
    }
    cout << fixed << setprecision(5) << min_x * sum_a << endl;
    return 0;
}
