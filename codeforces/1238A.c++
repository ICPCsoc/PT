#include "bits/stdc++.h"

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

    if (x - y > 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}