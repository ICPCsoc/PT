#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[10000];
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (max < a[i]) {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        sum += max - a[i];
    }
    cout << sum << endl;
    return 0;
}