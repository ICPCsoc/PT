#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    long long d = (a + 1) / 2;
    long long e = (b + 1) / 2;
    long long f = (c + 1) / 2;

    long long t1 = (d > 0) ? (d - 1) * 3 + 0 : -1;
    long long t2 = (e > 0) ? (e - 1) * 3 + 1 : -1;
    long long t3 = (f > 0) ? (f - 1) * 3 + 2 : -1;

    long long max_t = max({t1, t2, t3});

    cout << max_t + 30 << "\n";

    return 0;
}