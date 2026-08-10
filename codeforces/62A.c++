#include "bits/stdc++.h"

using namespace std;

bool can_hold(int g, int b) {
    return (b >= g - 1) && (b <= 2 * g + 2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int al, ar;
    int bl, br;
    if (cin >> al >> ar >> bl >> br) {
        bool opt1 = can_hold(al, br) && can_hold(ar, bl);
        bool opt2 = can_hold(al, bl) && can_hold(ar, br);
        if (opt1 || opt2) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}