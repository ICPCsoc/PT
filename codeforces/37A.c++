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