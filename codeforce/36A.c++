#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int m;
    cin >> m;
    string s;
    cin >> s;
    vector<int> n;
    for (int i = 0; i < m; i++) {
        if (s[i] == '1') {
            n.push_back(i);
        }
    }
    bool ok = true;
    int sum = n[1] - n[0];
    for (int i = 2; i < (int)n.size(); i++) {
        if (n[i] - n[i - 1  ] != sum) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}