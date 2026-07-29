#include <iostream>

using namespace std;

long long tanyaSubtract(long long n, int k) {
    if (k == 0) {
        return n;
    }
    if (n % 10 != 0) {
        n = n - 1;
    } 
    else {
        n = n / 10;
    }
    return tanyaSubtract(n, k - 1);
}

int main() {
    long long n;
    int k;
    cin >> n >> k;
    cout << tanyaSubtract(n, k) << endl;
    return 0;
}