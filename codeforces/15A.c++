#include "bits/stdc++.h"

using namespace std;

struct house {
    double left;
    double right;
};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double t;
    cin >> n >> t;
    vector<house> houses(n);
    for (int i = 0; i < n; ++i) {
        double x, a;
        cin >> x >> a;
        houses[i].left = x - a / 2.0;
        houses[i].right = x + a / 2.0;
    }
    sort(houses.begin(), houses.end(), [](const house& h1, const house& h2) {
        return h1.left < h2.left;
    });
    int sum = 2;
    for (int i = 0; i < n - 1; ++i) {
        double gap = houses[i + 1].left - houses[i].right;
        if (gap == t) {
            sum += 1;
        } else if (gap > t) {
            sum += 2;
        }
    }
    cout << sum << "\n";
    return 0;
}