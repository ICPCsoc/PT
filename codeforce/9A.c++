#include "bits/stdc++.h"

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    if (!(cin >> x >> y)) return 0;
    int max_val = max(x, y);
    int sum1 = 6 - max_val + 1;
    int sum2 = 6;
    int g = gcd(sum1, sum2);
    cout << sum1 / g << "/" << sum2 / g << "\n";
    return 0;
}