#include "bits/stdc++.h"

using namespace std;

int main (void){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    int odd = 101;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 1) {
            odd = min(odd, a[i]);
        }
    }
    if (sum % 2 == 1) {
        cout << sum << "\n";
    } 
    else {
        if (odd == 101) {
            cout << 0 << "\n";
        }
        else {
            cout << sum - odd << "\n";
        }
    }
    return 0;
}