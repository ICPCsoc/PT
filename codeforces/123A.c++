/*
Codeforces 123A - Prime Permutation
Source: https://codeforces.com/problemset/problem/123/A

Problem statement (paraphrased):
Rearrange the lowercase letters of a string s so that, for every prime position
p not exceeding |s| and every valid multiple p*i, the characters at positions
p and p*i are equal. Print YES and one valid permutation, or NO if this is
impossible.
*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    string a;
    if (!(cin >> a)) return 0;
    int b = a.size();
    vector<int> c(b + 1);
    for (int d = 1; d <= b; d++) c[d] = d;
    
    auto e = [&](auto& f, int g) -> int {
        return c[g] == g ? g : (c[g] = f(f, c[g]));
    };
    for (int h = 2; h <= b; h++) {
        bool i = true;
        for (int j = 2; j * j <= h; j++) {
            if (h % j == 0) { i = false; break; }
        }
        if (i) {
            for (int j = 2; h * j <= b; j++) {
                int k = e(e, h);
                int l = e(e, h * j);
                if (k != l) c[l] = k;
            }
        }
    }
    vector<int> m(b + 1, 0);
    for (int n = 1; n <= b; n++) m[e(e, n)]++;
    int o = 0, p = 0;
    for (int n = 1; n <= b; n++) {
        if (m[n] > o) {
            o = m[n];
            p = n;
        }
    }
    vector<int> q(26, 0);
    for (char r : a) q[r - 'a']++;
    int s = 0;
    for (int t = 1; t < 26; t++) {
        if (q[t] > q[s]) s = t;
    }
    if (o > 1 && q[s] < o) {
        cout << "NO\n";
    } 
    else {
        cout << "YES\n";
        string u(b, ' ');
        if (o > 1) {
            for (int v = 1; v <= b; v++) {
                if (e(e, v) == p) {
                    u[v - 1] = s + 'a';
                    q[s]--;
                }
            }
        }
        int w = 0;
        for (int v = 1; v <= b; v++) {
            if (u[v - 1] == ' ') {
                while (q[w] == 0) w++;
                u[v - 1] = w + 'a';
                q[w]--;
            }
        }
        cout << u << "\n";
    }
    
    return 0;
}