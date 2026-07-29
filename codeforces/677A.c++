#include "bits/stdc++.h"

using namespace std;

int getWidth(int index, int n, int h, const vector<int>& a) {
    if (index == n) {
        return 0;
    }
    int current_width = (a[index] > h) ? 2 : 1;
    return current_width + getWidth(index + 1, n, h, a);
}

int main() {
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << getWidth(0, n, h, a) << endl;
    return 0;
}