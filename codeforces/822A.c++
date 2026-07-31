#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long a, b;
    cin >> a >> b;
    long long n = min(a, b);
    long long m = 1;
    for (int i = 1; i <= n; i++)  {
        m *= i;
    }
    cout << m << endl;
    return 0;
}