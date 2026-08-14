#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    if (!(cin >> a)) return 0;

    vector<string> b = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    long long c = 1;
    while (a > 5 * c) {
        a -= 5 * c;
        c *= 2;
    }

    long long d = (a - 1) / c;
    cout << b[d] << "\n";

    return 0;
}