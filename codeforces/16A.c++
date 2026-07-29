#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) {
        return 0;
    }
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (s[i][j] != s[i][0]) {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (i > 0 && s[i][0] == s[i - 1][0]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}