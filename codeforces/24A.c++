/*
Codeforces 24A - Ring Road
Source: https://codeforces.com/problemset/problem/24/A

Problem statement (paraphrased):
n cities form one undirected ring, but every road currently has one direction
and a cost to reverse it. Find the minimum total reversal cost needed to make
all roads point consistently around the ring, so every city can reach every
other city.
*/

#include "bits/stdc++.h"

using namespace std;

struct a {
    int b;
    int c;
    int d;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<vector<a>> e(n + 1);
    int f = 0;
    for (int i = 0; i < n; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
     e[u].push_back({v, 1, c});
     e[v].push_back({u, 0, c});
        f += c;
    }
    int g = 0;
    int h = 1;
    int k = -1;
    for (int i = 0; i < n; ++i) {
        for (const auto& j : e[h]) {
            if (j.b != k) {
                if (j.c == 0) {
                    g += j.d;
                }
                k = h;
                h = j.b;
                break;
            }
        }
    }
    int l = f - g;
    cout << min(g, l) << endl;
    return 0;
}
