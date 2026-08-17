/*
Codeforces 231A - Team
Source: https://codeforces.com/problemset/problem/231/A

Problem statement (paraphrased):
For each of n contest problems, three binary values say whether Petya, Vasya, and
Tonya are confident they know the solution. The team implements a problem only
when at least two friends are confident. Print how many problems they implement.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        int d = a + b + c;
        if (d >= 2) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
