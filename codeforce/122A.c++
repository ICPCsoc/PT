#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool lucky = false;
    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            lucky = true;
            break;
        }
    }
    if (lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}