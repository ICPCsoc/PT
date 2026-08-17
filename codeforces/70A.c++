/*
Codeforces 70A - Cookies
Source: https://codeforces.com/problemset/problem/70/A

Problem statement (paraphrased):
A square 2^n by 2^n box is tiled greedily with the largest fitting cookies.
A size-k cookie occupies the cells on and above the main diagonal of a k by k
square. Infinitely many cookies of every size at least 2 are available, but
none of size 1; cookies cannot overlap, rotate, or flip. Print the number of
cells left empty modulo 1000003.
*/

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
