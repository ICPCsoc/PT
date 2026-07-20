#include "bits/stdc++.h"

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1;
    bool dangerous = false;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count == 7) {
            dangerous = true;
            break;
        }
    }
    if (dangerous) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }

    return 0;
}