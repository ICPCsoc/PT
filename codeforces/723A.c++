#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int a = max({x1, x2, x3});
    int b = min({x1, x2, x3});
    cout <<  a - b << endl;
    return 0;
}