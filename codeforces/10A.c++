#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        ll l = arr[i].first;
        ll r = arr[i].second;
        sum += (r - l) * P1;
        if (i < n - 1) {
            ll l1 = arr[i + 1].first;
            ll time = l1 - r;
            ll t1 = min(time, T1);
            sum += t1 * P1;
            time -= t1;
            ll t2 = min(time, T2);
            sum += t2 * P2;
            time -= t2;
            ll t3 = time;
            sum += t3 * P3;
        }
    }
    cout << sum << "\n";
    return 0;
}