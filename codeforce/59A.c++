#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char s[101];
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
        else if (s[i] >= 'a' && s[i] <= 'z') lower++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (upper > lower) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            }
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    }
    cout << s << endl;
    return 0;
}