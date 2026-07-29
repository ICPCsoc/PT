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