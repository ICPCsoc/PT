#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long a;
    cin >> a;
    int sum = 0;
    long long b = a;
    while (b > 0) {
        int c = b % 10;
        if (c == 4 || c == 7) sum++;
        b /= 10;
    }
    int d = sum;
    if (d == 0) {
        cout << "NO\n";
        return 0;
    }
    while (d > 0) {
        int e = d % 10;
        if (e != 4 && d != 7) {
            cout << "NO\n";
            return 0;
        }
        d /= 10;
    }
    cout << "YES\n";
    return 0;
}