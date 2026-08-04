#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (i != j && j != k && i != k) {
                    if (a[i] == a[j] + a[k]) {
                        cout << i << " " << j << " " << k << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << "\n";
    return 0;
}