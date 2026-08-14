#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (!(cin >> a >> b)) return 0;

    int c = a * (a + 1) / 2;
    b %= c;

    for (int d = 1; d <= a; ++d) {
        if (b >= d) {
            b -= d;
        } else {
            break;
        }
    }

    cout << b << "\n";

    return 0;
}