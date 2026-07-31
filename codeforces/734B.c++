#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int k1, k2, k3, k4;
    cin >> k1 >> k2 >> k3 >> k4;
    long long sum1 = min({k1, k3, k4});
    k1 -= sum1;
    long long sum2 = min(k1, k2);
    cout << sum1 * 256 +sum2 * 32 << endl;
    return 0;
}