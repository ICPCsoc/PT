#include "bits/stdc++.h"

using namespace std;

int main() {
    int A, B, n;
    cin >> A >> B >> n;

    bool found = false;
    for (int X = -1000; X <= 1000; ++X) {
        long long val = 1;
        bool m= false; 
        for (int i = 0; i < n; ++i) {
            if (abs(X) > 1 && abs(val) > 2000 / abs(X)) {
                m = true;
                break;
            }
            val *= X;
        }

        if (m) continue;

        if (A == 0) {
            if (B == 0) {
                cout << 0 << endl;
                found = true;
                break;
            } else {
                continue; 
            }
        }
        if (A * val == B) {
            cout << X << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No solution" << endl;
    }

    return 0;
}
