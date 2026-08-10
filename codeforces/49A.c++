#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    getline(cin, name);
    for (int i = name.length() - 1; i >= 0; --i) {
        if (isalpha(name[i])) {
            char letter = toupper(name[i]);
            if (letter == 'A' || letter == 'E' || letter == 'I' ||
                letter == 'O' || letter == 'U' || letter == 'Y') {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            break;
        }
    }
    return 0;
}