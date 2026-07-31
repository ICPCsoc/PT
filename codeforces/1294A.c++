#include "bits/stdc++.h"

using namespace std;

typedef long long ll;
int main (void) {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        ll mx = max(a, max(b , c));
        ll m = (mx - a) + (mx - b) + (mx - c);
        if (n >= m && (n - m) % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}