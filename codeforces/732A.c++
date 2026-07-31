#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b;
    cin >> a >> b;
    for(int i = 1; i <= 10; i++) {
        int sum = a * i;
        if(sum % 10 == 0 || sum % 10 == b) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}