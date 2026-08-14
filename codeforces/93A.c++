#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, d;
    if (!(cin >> a >> b >> c >> d)) return 0;

    c--; d--;

    long long e = c / b;
    long long f = d / b;

    long long u = c % b;
    long long v = d % b;

    if (e == f) {
        cout << 1 << "\n";
    } else if (u == 0 && (v == b - 1 || d == a - 1)) {
        cout << 1 << "\n";
    } else if (u == 0 || v == b - 1 || d == a - 1 || f - e == 1 || u == v + 1) {
        cout << 2 << "\n";
    } else {
        cout << 3 << "\n";
    }

    return 0;
}