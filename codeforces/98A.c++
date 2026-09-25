/*
Codeforces 98A - Help Victoria the Wise
Source: https://codeforces.com/problemset/problem/98/A

Problem statement (paraphrased):
Six gems with the given colours are placed one per face of a cube; gems of
the same colour are indistinguishable. Two decorations are considered equal
when a rotation of the cube transforms one into the other. Print the number
of distinct decorations.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    string a;
    cin >> a;
    vector<vector<int>> b;
    set<vector<int>> c;
    queue<vector<int>> d;
    vector<int> e = {0, 1, 2, 3, 4, 5};
    d.push(e);
    c.insert(e);
    while (!d.empty()) {
        vector<int> f = d.front();
        d.pop();
        b.push_back(f);
        vector<int> g = {f[2], f[3], f[1], f[0], f[4], f[5]};
        if (c.find(g) == c.end()) {
            c.insert(g);
            d.push(g);
        }
        vector<int> h = {f[0], f[1], f[5], f[4], f[2], f[3]};
        if (c.find(h) == c.end()) {
            c.insert(h);
            d.push(h);
        }
        vector<int> i = {f[5], f[4], f[2], f[3], f[0], f[1]};
        if (c.find(i) == c.end()) {
            c.insert(i);
            d.push(i);
        }
    }
    sort(a.begin(), a.end());
    set<string> j;
    do {
        string k = a;
        for (auto l : b) {
            string m = "";
            for (int n : l) {
                m += a[n];
            }
            if (m < k) {
                k = m;
            }
        }
        j.insert(k);
    } 
    while (next_permutation(a.begin(), a.end()));
    cout << j.size() << "\n";
    return 0;
}