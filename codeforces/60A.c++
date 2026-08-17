/*
Codeforces 60A - Where Are My Flakes?
Source: https://codeforces.com/problemset/problem/60/A

Problem statement (paraphrased):
One of n numbered boxes contains cereal. Each hint says it is strictly to the
left or strictly to the right of a specified box, excluding that box itself.
Print the number of boxes still possible after all hints, or -1 if no box can
satisfy them.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    int l = 1, r = n;
    for (int k = 0; k < m; ++k) {
        string word1, word2, direction, word4;
        int i;
        cin >> word1 >> word2 >> direction >> word4 >> i;
        if (direction == "left") {
            r = min(r, i - 1);
        } else if (direction == "right") {
            l = max(l, i + 1);
        }
    }
    if (l > r) {
        cout << -1 << "\n";
    } 
    else {
        cout << (r - l + 1) << "\n";
    }
    return 0;
}
