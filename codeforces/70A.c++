#include <iostream>

using namespace std;

long long power(long long a, long long b, long long c) {
    long long result = 1;
    a %= c;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % c;
        }
        a = (a * a) % c;
        b /= 2;
    }
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    const long long sum = 1000003;
    if (n == 0) {
        cout << 1 << "\n";
    } else {
        cout << power(3, n - 1, sum) << "\n";
    }
    return 0;
}