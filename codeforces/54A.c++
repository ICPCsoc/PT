#include "bits/stdc++.h"

using namespace std;

int main (void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    int c;
    cin >> c;
    vector<int> holiday(c);
    for (int i = 0; i < c; ++i) {
        cin >> holiday[i];
    }
    int total = c;
    int last = 0;
    for (int i = 0; i < c; ++i) {
        int gap = holiday[i] - last;
        total += (gap - 1) / k;
        last = holiday[i];
    }
    int remaining = n - last;
    total += remaining / k;
    cout << total << "\n";
    return 0;
}