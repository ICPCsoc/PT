#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 1 << endl;
    }
    else {
        int c = n % 4;
        if (c == 1) {
            cout << 8 << endl;
        }
        else if (c == 2) {
            cout << 4 << endl;
        }
        else if (c == 3) {
            cout << 2 << endl;
        }
        else {
            cout << 6 << endl;
        }
    }
    return 0;
}