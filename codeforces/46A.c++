#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        sum = (sum + i) % n;
        cout << sum + 1 << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}