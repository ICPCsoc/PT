#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    long long c = b;
    long long d = 1;
    while (c >= 10) {
        c /= 10;
        d *= 10;
    }

    long long e = d * 10 - 1;
    long long f = e / 2;

    auto u = [&](long long v) {
        string s = to_string(v);
        for (char &ch : s) {
            ch = '0' + ('9' - ch);
        }
        return stoll(s);
    };

    if (f >= a && f <= b) {
        cout << f * u(f) << "\n";
    } else if (f < a) {
        cout << a * u(a) << "\n";
    } else {
        cout << b * u(b) << "\n";
    }

    return 0;
}