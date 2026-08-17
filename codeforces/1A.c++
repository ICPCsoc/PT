/*
Codeforces 1A - Theatre Square
Source: https://codeforces.com/problemset/problem/1/A

Problem statement (paraphrased):
A rectangular square has dimensions n by m metres and must be completely
covered with square flagstones of side a. Flagstones cannot be cut, their
sides must remain parallel to the square, and covering beyond the boundary
is allowed. Given n, m, and a (1 <= n, m, a <= 10^9), print the minimum
number of flagstones required.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long n, m, a; cin >> n >> m >> a;
    long long temp = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << temp << endl;
    return 0;
}
