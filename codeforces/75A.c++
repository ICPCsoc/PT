#include "bits/stdc++.h"

using namespace std;

long long remove(long long n) {
    string s = to_string(n);
    string result = "";
    for (char c : s) {
        if (c != '0') {
            result += c;
        }
    }
    return stoll(result);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (cin >> a >> b) {
        long long c = a + b;
        long long a1 = remove(a);
        long long b1 = remove(b);
        long long c1 = remove(c);
        if (a1 + b1 == c1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}