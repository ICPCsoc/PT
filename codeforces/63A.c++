#include "bits/stdc++.h"

using namespace std;

struct c {
    string name;
    string role;
    int priority;
};

int a(const string& role) {
    if (role == "rat") return 1;
    if (role == "woman" || role == "child") return 2;
    if (role == "man") return 3;
    if (role == "captain") return 4;
    return 5;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    vector<c> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].name >> arr[i].role;
        arr[i].priority = a(arr[i].role);
    }
    for (int p = 1; p <= 4; ++p) {
        for (int i = 0; i < n; ++i) {
            if (arr[i].priority == p) {
                cout << arr[i].name << "\n";
            }
        }
    }
    return 0;
}