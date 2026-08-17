/*
Codeforces 74A - Room Leader
Source: https://codeforces.com/problemset/problem/74/A

Problem statement (paraphrased):
For each contestant, total the five problem scores, add 100 points per
successful hack, and subtract 50 per unsuccessful hack. Exactly one contestant
has the maximum total. Print that contestant's handle.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string f = "";
    int max_a = -1e9;
    for (int i = 0; i < n; ++i) {
        string g;
        int p, m, a, b, c, d, e;
        cin >> g >> p >> m >> a >> b >> c >> d >> e;
        int h = (p * 100) - (m * 50) + a + b + c + d + e;
        if (h > max_a) {
            max_a = h;
            f = g;
        }
    }
    cout << f << "\n";
    return 0;
}
