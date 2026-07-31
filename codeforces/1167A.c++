#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    while (n--) {
        int a;
        int pos = -1;
        string s;
        cin >> a;
        cin >> s;
        for (int i = 0; i < a; i++) {
            if (s[i] == '8') {
                pos = i;
                break;
            }
        }
        if (pos != -1 && a - pos >= 11) {
            cout << "YES" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}