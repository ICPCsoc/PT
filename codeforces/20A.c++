#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    if (!getline(cin, a)) {
        return 0;
    }
    if (!a.empty() && a.back() == '\r') {
        a.pop_back();
    }
    string b;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == '/' && !b.empty() && b.back() == '/') {
            continue;
        }
        b.push_back(a[i]);
    }
    if (b.size() > 1 && b.back() == '/') {
        b.pop_back();
    }
    cout << b << '\n';
    return 0;
}
