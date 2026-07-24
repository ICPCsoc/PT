#include "bits/stdc++.h" 

using namespace std;

int main (void) {
    char a[1000], b[1000];
    cin >> a >> b;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == b[i]) {
            cout << '0';
        }
        else {
            cout << '1';
        }
    }
    cout << endl;
    return 0;
}