/*
Codeforces 51A - Cheaterius's Problem
Source: https://codeforces.com/problemset/problem/51/A

Problem statement (paraphrased):
Each of n amulets is a 2 by 2 arrangement of values from 1 to 6. Two amulets
belong to the same pile when one can be rotated by 0, 90, 180, or 270 degrees
to match the other; flipping is forbidden. Print the number of distinct
rotation-equivalence classes.
*/

#include "bits/stdc++.h"

using namespace std;

using arr = tuple<int, int, int, int>;

arr brr(int a, int b, int c, int d) {
    arr r0 = {a, b, c, d};
    arr r1 = {d, a, b, c};
    arr r2 = {c, d, a, b};
    arr r3 = {b, c, d, a};

    return min({r0, r1, r2, r3});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<arr> an;
    for (int i = 0; i < n; ++i) {
        string s1, s2, sep;
        int a, b, c, d;
        cin >> a >> b;
        cin >> d >> c;
        if (i < n - 1) {
            cin >> sep;
        }
        an.insert(brr(a, b, c, d));
    }
    cout << an.size() << "\n";
    return 0;
}
