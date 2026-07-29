#include "bits/stdc++.h"

using namespace std;

bool init (int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main (void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> a;
    for (int i = 2; i <= n; i++) {
        if (init(i)) {
            a.push_back(i);
        }
    }
    int sum = 0;
    for (int i = 0; i + 1 < (int)a.size(); i++) {
        int num = a[i] + a[i + 1] + 1;
        if (init(num) && num <= n) {
            sum++;
        }
    }
    if (sum >= m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}