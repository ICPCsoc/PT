/*
Codeforces 37A - Towers
Source: https://codeforces.com/problemset/problem/37/A

Problem statement (paraphrased):
All n wooden bars must be arranged into the fewest towers. Bars can be placed
in the same tower only when they have equal lengths. Print the height of the
tallest resulting tower and the total number of towers.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    vector<int> bars(n);
    for (int i = 0; i < n; i++) {
        cin >> bars[i];
    }

    map<int, int> freq;
    for (int len : bars) {
        freq[len]++;
    }

    int tallest = 0;
    int numTowers = freq.size();

    for (auto &p : freq) {
        tallest = max(tallest, p.second);
    }
    cout << tallest << " " << numTowers << "\n";
    return 0;
}
