/*
Codeforces 15A - Cottage Village
Source: https://codeforces.com/problemset/problem/15/A

Problem statement (paraphrased):
There are n non-overlapping square houses whose centres lie on the x-axis;
house i has centre xi and side ai. Count the possible centre positions for a
new axis-aligned square house of side t that does not overlap any existing
house and touches at least one of them. Its centre may be non-integral.
*/

#include "bits/stdc++.h"

using namespace std;

struct house {
    double left;
    double right;
};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double t;
    cin >> n >> t;
    vector<house> houses(n);
    for (int i = 0; i < n; ++i) {
        double x, a;
        cin >> x >> a;
        houses[i].left = x - a / 2.0;
        houses[i].right = x + a / 2.0;
    }
    sort(houses.begin(), houses.end(), [](const house& h1, const house& h2) {
        return h1.left < h2.left;
    });
    int sum = 2;
    for (int i = 0; i < n - 1; ++i) {
        double gap = houses[i + 1].left - houses[i].right;
        if (gap == t) {
            sum += 1;
        } else if (gap > t) {
            sum += 2;
        }
    }
    cout << sum << "\n";
    return 0;
}
