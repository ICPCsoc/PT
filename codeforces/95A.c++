#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    if (!(cin >> a)) return 0;

    vector<string> b(a);
    for (int c = 0; c < a; ++c) {
        cin >> b[c];
    }

    string c, d;
    cin >> c >> d;

    string e = c;
    for (char &f : e) f = tolower(f);

    int f = (int)c.size();
    vector<bool> u(f, false);

    for (const string &s : b) {
        string t = s;
        for (char &ch : t) ch = tolower(ch);
        int len = (int)t.size();

        for (int i = 0; i <= f - len; ++i) {
            if (e.substr(i, len) == t) {
                for (int j = i; j < i + len; ++j) {
                    u[j] = true;
                }
            }
        }
    }

    char rep = tolower(d[0]);
    char alt = (rep == 'a') ? 'b' : 'a';

    for (int i = 0; i < f; ++i) {
        if (u[i]) {
            char target = (e[i] == rep) ? alt : rep;
            if (isupper(c[i])) {
                c[i] = toupper(target);
            } else {
                c[i] = target;
            }
        }
    }

    cout << c << "\n";

    return 0;
}