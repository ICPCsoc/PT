/*
Codeforces 94A - Restoring Password
Source: https://codeforces.com/problemset/problem/94/A

Problem statement (paraphrased):
An 80-bit string encodes an eight-digit password, with each consecutive block
of 10 bits representing one digit. The next ten input strings give the
distinct 10-bit codes for digits 0 through 9. Decode and print the password.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    if (!(cin >> a)) return 0;

    vector<string> b(10);
    for (int c = 0; c < 10; ++c) {
        cin >> b[c];
    }

    string c = "";
    for (int d = 0; d < 80; d += 10) {
        string e = a.substr(d, 10);
        for (int f = 0; f < 10; ++f) {
            if (b[f] == e) {
                c += to_string(f);
                break;
            }
        }
    }

    cout << c << "\n";

    return 0;
}
