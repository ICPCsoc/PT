/*
Codeforces 107A - Dorm Water Supply
Source: https://codeforces.com/problemset/problem/107/A

Problem statement (paraphrased):
There are n houses connected by directed pipes, each with a diameter. Every
house has at most one incoming and one outgoing pipe. For every chain beginning
at a house with no incoming pipe and ending at one with no outgoing pipe,
print the start, the end, and the minimum pipe diameter along that chain.
List the chains by increasing starting house.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> c(a + 1, 0);
    vector<int> d(a + 1, 0);
    vector<int> e(a + 1, 0);
    for (int f = 0; f < b; f++) {
        int g, h, i;
        cin >> g >> h >> i;
        c[g] = h;
        d[g] = i;
        e[h]++;
    }
    vector<vector<int>> j;
    for (int k = 1; k <= a; k++) {
        if (e[k] == 0 && c[k] != 0) {
            int l = k;
            int m = 1e9;
            while (c[l] != 0) {
                m = min(m, d[l]);
                l = c[l];
            }
            j.push_back({k, l, m});
        }
    }
    cout << j.size() << endl;
    for (auto n : j) {
        cout << n[0] << " " << n[1] << " " << n[2] << endl;
    }
    return 0;
}