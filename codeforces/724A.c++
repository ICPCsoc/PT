#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int b = 0;
    int c = 0;
    char a[10000000];
    cin >> a;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'A') {
            b++;
        }
        else if (a[i] == 'D') {
            c++;
        }
    }
    if (b > c) {
        cout << "Anton" << endl;
    }
    else if (c > b) {
        cout << "Danik" << endl;
    }
    else if (c == b) {
        cout << "Friendship" << endl; 
    }
    return 0;
}