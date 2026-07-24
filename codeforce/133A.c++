#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s;
    cin >> s;
    int n = s.size();
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            b = 1;
        }
    }
    if (b == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}