/*
Codeforces 97A - Domino
Source: https://codeforces.com/problemset/problem/97/A

Problem statement (paraphrased):
The complete double-six set contains 28 distinct dominoes labelled by every
unordered pair of digits 0 through 6. A board contains 28 marked non-overlapping
domino-shaped chips. Assign a different set domino to each chip so the occupied
cells can be partitioned into fourteen 2 by 2 squares, each containing four
equal digits. Print the number of valid assignments and any one digit-filled
board realizing such an assignment.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    
    vector<string> c(a);
    for (int d = 0; d < a; d++) {
        cin >> c[d];
    }
    vector<vector<int>> e(a, vector<int>(b, -1));
    int f = 0;
    for (int d = 0; d < a; d++) {
        for (int g = 0; g < b; g++) {
            if (c[d][g] != '.' && e[d][g] == -1) {
                e[d][g] = f;
                e[d][g + 1] = f;
                e[d + 1][g] = f;
                e[d + 1][g + 1] = f;
                f++;
            }
        }
    }
    map<char, vector<pair<int, int>>> h;
    for (int d = 0; d < a; d++) {
        for (int g = 0; g < b; g++) {
            if (c[d][g] != '.') {
                h[c[d][g]].push_back({d, g});
            }
        }
    }
    vector<pair<int, int>> i;
    for (auto& j : h) {
        int k = e[j.second[0].first][j.second[0].second];
        int l = e[j.second[1].first][j.second[1].second];
        i.push_back({k, l});
    }
    vector<vector<int>> m(14, vector<int>(14, 0));
    for (auto& j : i) {
        m[j.first][j.second]++;
        if (j.first != j.second) {
            m[j.second][j.first]++;
        }
    }
    vector<int> n(14, -1);
    vector<vector<bool>> o(7, vector<bool>(7, false));
    long long p = 0;
    vector<int> q(14, -1);
    auto r = [&](auto& s, int t) -> void {
        if (t == 7) {
            p++;
            if (p == 1) {
                q = n;
            }
            return;
        }
        int u = 0;
        while (u < 14 && n[u] != -1) u++;
        if (u == 14) return;
        for (int v = u + 1; v < 14; v++) {
            if (n[v] == -1) {
                if (m[u][u] + m[v][v] + m[u][v] != 1) continue;
                n[u] = t;
                n[v] = t;
                bool w = true;
                vector<pair<int, int>> x;
                for (int y = 0; y < 28; y++) {
                    int z = i[y].first;
                    int aa = i[y].second;
                    
                    if (n[z] != -1 && n[aa] != -1) {
                        if (z == u || z == v || aa == u || aa == v) {
                            int ab = n[z];
                            int ac = n[aa];
                            if (ab > ac) swap(ab, ac);
                            
                            if (o[ab][ac]) {
                                w = false;
                                break;
                            }
                            o[ab][ac] = true;
                            x.push_back({ab, ac});
                        }
                    }
                }
                if (w) {
                    s(s, t + 1);
                }
                for (auto& ad : x) {
                    o[ad.first][ad.second] = false;
                }
                n[u] = -1;
                n[v] = -1;
            }
        }
    };
    r(r, 0);
    long long ae = p * 5040LL;
    cout << ae << "\n";
    if (ae > 0) {
        for (int d = 0; d < a; d++) {
            for (int g = 0; g < b; g++) {
                if (c[d][g] != '.') {
                    cout << q[e[d][g]];
                } else {
                    cout << '.';
                }
            }
            cout << "\n";
        }
    }
    return 0;
}