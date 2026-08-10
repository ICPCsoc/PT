#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    set<pair<string, string>> a;
    for (int i = 0; i < n; ++i) {
        string b, c;
        cin >> b >> c;
        a.insert({b, c});
    }
    cout << a.size() << "\n";
    return 0;
}