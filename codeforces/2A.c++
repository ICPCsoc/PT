/*
Codeforces 2A - Winner
Source: https://codeforces.com/problemset/problem/2/A

Problem statement (paraphrased):
A game consists of n chronological rounds. Each round gives a named player
an integer score change, which may be negative. The winner must have the
largest total score after all rounds. If several players share that final
maximum, the winner is the first among them whose running score reached or
exceeded that maximum. Read all rounds and print the winner's name.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<pair<string, int>> brr(n);
    map<string, int> arr;
    for (int i = 0; i < n; i++) {
        cin >> brr[i].first >> brr[i].second;
        arr[brr[i].first] += brr[i].second;
    }
    int maxn = INT_MIN;
    for (auto const& [name, score] : arr) {
        maxn = max(maxn, score);
    }
    map<string, int> score;
    for (int i = 0; i < n; i++) {
        string b = brr[i].first;
        int c = brr[i].second;
        score[b] += c;
        if (score[b] >= maxn && arr[b] == maxn) {
            cout << b << "\n";
            return 0;
        }
    }
    return 0;
}
