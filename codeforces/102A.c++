/*
Codeforces 102A - Clothes
Source: https://codeforces.com/problemset/problem/102/A

Problem statement (paraphrased):
There are n clothing items with given prices and m pairs of items that match.
Choose three distinct items such that every pair among them matches, while
minimizing their total price. Print the minimum total, or -1 if no such trio
exists.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> c(a + 1);
    for (int d = 1; d <= a; d++) {
        cin >> c[d];
    }
    vector<vector<bool>> e(a + 1, vector<bool>(a + 1, false));
    for (int f = 0; f < b; f++) {
        int g, h;
        cin >> g >> h;
        e[g][h] = e[h][g] = true;
    }
    
    int i = 1e9;
    for (int j = 1; j <= a; j++) {
        for (int k = j + 1; k <= a; k++) {
            for (int l = k + 1; l <= a; l++) {
                if (e[j][k] && e[k][l] && e[j][l]) {
                    i = min(i, c[j] + c[k] + c[l]);
                }
            }
        }
    }
    
    if (i == 1e9) cout << -1 << endl;
    else cout << i << endl;
    
    return 0;
}