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