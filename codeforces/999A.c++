#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int g;
    cin >> g;
    int a;
    cin >> a;
    int b[10000000];
    for (int i = 0; i < g; i++) {
        cin >> b[i];
    }
    int c = 0;
    int d = 0;
    for (int i = 0; i < g; i++) {
        if (b[i] <= a) {
            c++;
        }
        else if (b[i] > a) {
            break;
        }
    }
    for (int i = g - 1; i >= 0; i--) {
        if (b[i] <= a) {
            d++;
        }
        else if (b[i] > a) {
            break;
        }
    }
    int sum = d + c;
    if (sum > g) {
        sum = g;
    }
    cout << sum << endl;
    return 0;
}