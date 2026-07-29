#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        a.insert(val);
    }
    if (a.size() < 2) {
        cout << "NO\n";
    } 
    else {
        auto it = a.begin();
        ++it;
        cout << *it << "\n";
    }
    return 0;
}