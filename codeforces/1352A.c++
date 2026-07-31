#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    int a[10];
    int sum = 0;
    int pc = 1;

        while (n > 0) {
            int b = n % 10;
            if (b != 0) {
                a[sum++] = b * pc;
            }
            n /= 10;
            pc *= 10;
        }
        cout << sum << "\n";
        for (int i = 0; i < sum; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}