#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    vector<long long> d(a);
    for (int e = 0; e < a; ++e) {
        cin >> d[e];
    }

    if (a % 2 == 0) {
        cout << 0 << "\n";
        return 0;
    }

    long long e = (a + 1) / 2;
    long long f = b * c;

    long long min_val = d[0];
    for (int i = 0; i < a; i += 2) {
        min_val = min(min_val, d[i]);
    }

    long long ans = min(min_val, f / e);
    cout << ans << "\n";

    return 0;
}