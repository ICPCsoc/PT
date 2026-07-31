#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (arr[i] == 0) {
            for (int j = i; j <= n; j += i) {
                arr[j]++;
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] == 2) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}