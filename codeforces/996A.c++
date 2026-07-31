#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> b = {100, 20, 10, 5, 1};
    int sum = 0;
    for (int a : b) {
        sum += n / a;
        n %= a;
    }
    cout << sum << "\n";
    return 0;
}