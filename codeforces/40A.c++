#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b; cin >> a >> b;
    int d = floor(sqrt(pow(a, 2) + pow(b, 2)));
    if (d % 2 == 0) {
        cout << "white" << endl;
    }
    else {
        cout << "black" << endl;
    }
    return 0;
}