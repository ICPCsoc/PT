#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        int first = -1, last = -1;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '1') {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        int sum = 0;
        if (first != -1) {
            for (int i = first;i <= last; i++) {
                if (s[i] == '0') {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}