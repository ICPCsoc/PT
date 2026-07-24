#include "bits/stdc++.h"

using namespace std;

int main (void){
    int n;
    cin >> n;
    int x[1000], y[1000], z[1000];
    int sum = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
        sum += x[i];
        sum1 += y[i];
        sum2 += z[i];
    }
    if (sum == 0 && sum1 == 0 && sum2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}