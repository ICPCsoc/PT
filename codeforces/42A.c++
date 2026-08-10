#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    double c;
    cin >> n >> c;
    vector<double> a(n), b(n);
    double sum_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    double min_x = c / sum_a;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        min_x = min(min_x, b[i] / a[i]);
    }
    cout << fixed << setprecision(5) << min_x * sum_a << endl;
    return 0;
}