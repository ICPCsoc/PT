/*
Codeforces 28A - Bender Problem
Source: https://codeforces.com/problemset/problem/28/A

Problem statement (paraphrased):
n even-numbered nails define an axis-aligned closed polyline in their given
order. Each available rod may be folded once at 90 degrees, attached by its
fold to an unused nail, and have its ends attached to that nail's two
neighbours; a rod must have the required total length and cannot be reused.
Determine whether rods can be assigned to alternating nails so the picture
is constructed. Print NO if impossible; otherwise print YES and, for every
nail, its rod index or -1. Any valid assignment is accepted.
*/

#include "bits/stdc++.h"

using namespace std;

struct Pt {
    long long x, y;
};

struct Rod {
    int id;
    long long len;
};

struct Req {
    int idx;
    long long len;
};

int n, m;
vector<Pt> a;
vector<Rod> r;

long long dist(int i, int j) {
    return abs(a[i].x - a[j].x) + abs(a[i].y - a[j].y);
}

bool solve(int start, vector<int>& ans) {
    vector<Req> reqs;
    for (int i = start; i < n; i += 2) {
        int p = (i - 1 + n) % n;
        int q = (i + 1) % n;
        long long len = dist(p, i) + dist(i, q);
        reqs.push_back({i, len});
    }
    sort(reqs.begin(), reqs.end(), [](const Req& x, const Req& y) {
        return x.len < y.len;
    });
    ans.assign(n, -1);
    int p = 0;
    for (const auto& req : reqs) {
        while (p < m && r[p].len < req.len) p++;
        
        if (p >= m || r[p].len > req.len) return false;

        ans[req.idx] = r[p].id;
        p++;
    }
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m, n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y;
    }
    r.resize(m);
    for (int i = 0; i < m; ++i) {
        r[i].id = i + 1;
        cin >> r[i].len;
    }
    sort(r.begin(), r.end(), [](const Rod& x, const Rod& y) {
        return x.len < y.len;
    });
    vector<int> ans;
    if (solve(0, ans) || solve(1, ans)) {
        cout << "YES\n";
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}
