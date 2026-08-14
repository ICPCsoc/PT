#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    if (!(cin >> a)) return 0;

    vector<long long> b(a);
    for (int c = 0; c < a; ++c) {
        cin >> b[c];
    }

    long long d = 0;
    long long e = 0;

    for (int f = 0; f < a; ++f) {
        if (f == 0 || b[f] == b[f - 1]) {
            e++;
        } else {
            d += e * (e + 1) / 2;
            e = 1;
        }
    }
    d += e * (e + 1) / 2;

    cout << d << "\n";

    return 0;
}