/*
Codeforces 76A - Gift
Source: https://codeforces.com/problemset/problem/76/A

Problem statement (paraphrased):
An undirected multigraph has a gold requirement gi and silver requirement si
on every road. A gift containing a gold and b silver coins makes exactly the
roads with gi <= a and si <= b safe. Gold and silver cost G and S per coin.
Find the minimum value a*G + b*S that makes all N cities connected by safe
roads, or print -1 if this is impossible.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struct đại diện cho một con đường
struct a {
    int b, c;    // b: đỉnh đầu, c: đỉnh cuối
    long long d, e; // d: vàng, e: bạc
};

// Cấu trúc DSU
struct f {
    vector<int> g;
    f(int h) : g(h + 1) {
        for (int i = 1; i <= h; ++i) g[i] = i;
    }
    int j(int k) {
        if (g[k] == k)
            return k;
        return g[k] = j(g[k]);
    }
    bool l(int m, int n) {
        int o = j(m);
        int p = j(n);
        if (o != p) {
            g[o] = p;
            return true;
        }
        return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, r;
    if (!(cin >> q >> r)) return 0;

    long long s, t;
    cin >> s >> t;
    vector<a> u(r);
    for (int v = 0; v < r; ++v) {
        cin >> u[v].b >> u[v].c >> u[v].d >> u[v].e;
    }
    sort(u.begin(), u.end(), [](const a& w, const a& x) {
        return w.d < x.d;
    });
    vector<a> y;
    long long z = -1;
    for (int A = 0; A < r; ++A) {
        y.push_back(u[A]);
        for (int B = (int)y.size() - 1; B > 0; --B) {
            if (y[B].e < y[B - 1].e) {
                swap(y[B], y[B - 1]);
            } else {
                break;
            }
        }
        f C(q);
        vector<a> D;
        long long E = 0;
        int F = 0;
        for (const auto& G : y) {
            if (C.l(G.b, G.c)) {
                D.push_back(G);
                E = max(E, G.e);
                F++;
            }
        }
        y = D;
        if (F == q - 1) {
            long long H = u[A].d;
            long long I = s * H + t * E;
            if (z == -1 || I < z) {
                z = I;
            }
        }
    }

    cout << z << "\n";

    return 0;
}
