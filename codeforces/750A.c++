#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    int b = 0;
    int a = 240 - m;
    for (int i = 1; i <= n; i++) {
        b += 5 * i;
        if (b > a) {
            break;
        }
        sum++;
    }
    cout << sum << endl;
    return 0;
}