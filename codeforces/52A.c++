/*
Codeforces 52A - 123-sequence
Source: https://codeforces.com/problemset/problem/52/A

Problem statement (paraphrased):
Given n values, each equal to 1, 2, or 3, replace as few elements as possible
so that every element becomes equal. Print the minimum number of replacements.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> cnt(4, 0);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
    int keep = max({cnt[1], cnt[2], cnt[3]});
    cout << n - keep << "\n";
    return 0;
}
