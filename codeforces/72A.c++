#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<pair<int, int>> arr = {
        {7, 5040},
        {5, 120},
        {3, 6},
        {2, 2},
        {1, 1}
    };
    vector<int> ans;
    for (auto& p : arr) {
        int val = p.first;
        int sum = p.second;
        if (n >= sum) {
            ans.push_back(val);
            n -= sum;
        }
    }
    if (n == 0) {
        for (size_t i = 0; i < ans.size(); ++i) {
            cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
        }
        cout << "\n";
    } 
    else {
        cout << 0 << "\n";
    }
    return 0;
}