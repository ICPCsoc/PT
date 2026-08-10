#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p1, p2, p3, p4, a, b;
    if (cin >> p1 >> p2 >> p3 >> p4 >> a >> b) {
        int p = min({p1, p2, p3, p4});
        int c = min(b, p - 1);

        if (c >= a) {
            cout << (c - a + 1) << "\n";
        } 
        else {
            cout << 0 << "\n";
        }
    }
    return 0;
}