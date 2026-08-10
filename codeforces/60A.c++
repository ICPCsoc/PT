#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    int l = 1, r = n;
    for (int k = 0; k < m; ++k) {
        string word1, word2, direction, word4;
        int i;
        cin >> word1 >> word2 >> direction >> word4 >> i;
        if (direction == "left") {
            r = min(r, i - 1);
        } else if (direction == "right") {
            l = max(l, i + 1);
        }
    }
    if (l > r) {
        cout << -1 << "\n";
    } 
    else {
        cout << (r - l + 1) << "\n";
    }
    return 0;
}