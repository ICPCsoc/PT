#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k;cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= arr[k - 1] && arr[i] > 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}