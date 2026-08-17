/*
Codeforces 67A - Partial Teacher
Source: https://codeforces.com/problemset/problem/67/A

Problem statement (paraphrased):
n students stand in a row. A string of n-1 symbols describes each adjacent
marks comparison: L means the left student scored higher, R means the right
student scored higher, and '=' means equal marks. Give every student at least
one toffee while respecting all comparisons and minimizing the total. Print
the number assigned to each student.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    string s;
    cin >> s;
    vector<int> a(n, 1);
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == 'R') {
            a[i] = a[i - 1] + 1;
        } else if (s[i - 1] == '=') {
            a[i] = a[i - 1];
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] == 'L') {
            a[i] = max(a[i], a[i + 1] + 1);
        } else if (s[i] == '=') {
            a[i] = max(a[i], a[i + 1]);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
