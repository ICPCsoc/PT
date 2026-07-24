#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char a[1000];
    cin >> a;
    int i = 0;
    while (a[i] != '\0') {
        if(a[i] == '.') {
            cout << 0;
            i++;
        }
        else if (a[i] == '-') {
            if (a[i+ 1] == '.') {
                cout << 1;
            }
            else if (a[i + 1] == '-') {
                cout << 2;
            }
            i += 2;
        }
    }
    cout << endl;
    return 0;
}