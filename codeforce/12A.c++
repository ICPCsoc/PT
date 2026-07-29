#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> arr(3);
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    bool b = true;
    if (arr[0][0] != arr[2][2]) {
        b = false;
    }
    if (arr[0][1] != arr[2][1]) {
        b = false;
    }
    if (arr[0][2] != arr[2][0]) {
        b = false;
    }
    if (arr[1][0] != arr[1][2]) {
        b = false;
    }
    if (b) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}