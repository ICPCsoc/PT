#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k, n1;
    cin >> n >> k >> n1;
    if (1LL * k * n1 * n1 >= 1LL * n * n){
        cout << "YES";}
    else{
        cout << "NO";}
    return 0;
}