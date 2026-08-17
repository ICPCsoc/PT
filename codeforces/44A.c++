/*
Codeforces 44A - Indian Summer
Source: https://codeforces.com/problemset/problem/44/A

Problem statement (paraphrased):
Each of n fallen leaves is described by its tree species and colour. Alyona
keeps a leaf only if she has not already kept one with that exact pair of
properties. Print the number of distinct (species, colour) pairs.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    set<pair<string, string>> a;
    for (int i = 0; i < n; ++i) {
        string b, c;
        cin >> b >> c;
        a.insert({b, c});
    }
    cout << a.size() << "\n";
    return 0;
}
