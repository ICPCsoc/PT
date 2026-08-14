#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (!(cin >> a >> b)) return 0;

    auto c = [](int d) {
        if (d < 2) return false;
        for (int e = 2; e * e <= d; ++e) {
            if (d % e == 0) return false;
        }
        return true;
    };

    int f = a + 1;
    while (!c(f)) {
        f++;
    }

    if (f == b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}