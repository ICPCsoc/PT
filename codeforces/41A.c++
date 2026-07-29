#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char a[1000];
    cin >> a;
    char b[1000];
    cin >> b;
    int suma = 0;
    int sumb = 0;
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        suma++;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        sumb++;
    }
    if (suma != sumb) {
        sum = 1;
    }
    for (int i = 0; i < suma; i++) {
        if (a[i] != b[suma - i - 1]) {
            sum = 1;
            i = suma;
        }
    }
    if (sum == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}