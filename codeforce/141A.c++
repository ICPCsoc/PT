#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a, b;
    cin >> a >> b;
    string c;
    cin >> c;
    int sum[26] = {0};

    for (size_t i = 0; i < a.size(); i++) {
        sum[a[i] - 'A']++;
    }
    for (size_t i = 0; i < b.size(); i++) {
        sum[b[i] - 'A']++;
    }
    for (size_t i = 0; i < c.size(); i++) {
        sum[c[i] - 'A']--;
    }
    bool ok = true;
    for (int i = 0; i < 26; i++) {
        if (sum[i] != 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}