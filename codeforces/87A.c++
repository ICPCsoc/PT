#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    long long c = std::gcd(a, b);
    long long d = a / c;
    long long e = b / c;

    if (abs(d - e) == 1) {
        cout << "Equal\n";
    } else if (d < e) {
        cout << "Dasha\n";
    } else {
        cout << "Masha\n";
    }

    return 0;
}