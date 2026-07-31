#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int d = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'D') {
            d++;
        }
        else if (s[i] == 'A') {
            a++;
        }
    }
    if (a > d) {
        cout << "Anton" << endl;
    }
    else if (a < d) {
        cout << "Danik" << endl;
    }
    else if (a = d) {
        cout << "Friendship" << endl;
    }
    return 0;
}