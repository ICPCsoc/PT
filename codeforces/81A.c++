#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    if (!(cin >> a)) return 0;

    string b = "";
    for (char c : a) {
        if (!b.empty() && b.back() == c) {
            b.pop_back();
        } else {
            b.push_back(c);
        }
    }

    cout << b << "\n";

    return 0;
}