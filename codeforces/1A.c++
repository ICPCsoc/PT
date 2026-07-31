#include "bits/stdc++.h"
// ảnh -> mei mei _> linh tran
using namespace std;

int main (void) {
    long long n, m, a; cin >> n >> m >> a;
    long long temp = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << temp << endl;
    return 0;
}