/*
Codeforces 34A - Reconnaissance 2
Source: https://codeforces.com/problemset/problem/34/A

Problem statement (paraphrased):
n soldiers stand in a circle in the given order. Find any neighbouring pair
with the minimum absolute height difference and print their 1-based indices.
The first and last soldiers are also neighbours.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    int min_a = INT_MAX;
    int ans1 = -1, ans2 = -1;
    for (int i = 1; i <= n; ++i) {
        int next = (i == n) ? 1 : i + 1;
        int d = abs(a[i] - a[next]);

        if (d < min_a) {
            min_a = d;
            ans1 = i;
            ans2 = next;
        }
    }
    cout << ans1 << " " << ans2 << "\n";
    return 0;
}
