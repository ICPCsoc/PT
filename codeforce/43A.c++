#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a, b;
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (i == 0) {
            a = s;
            sum1++;
        }
        else {
            if (s == a) {
                sum1++;
            }
            else {
                b = s;
                sum2++;
            }
        }
    }
    if (sum1 < sum2) {
        cout << b << endl;
    }
    else {
        cout << a << endl;
    }
    return 0;
}