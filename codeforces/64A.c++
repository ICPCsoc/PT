/*
Codeforces 64A - Factorial
Source: https://codeforces.com/problemset/problem/64/A

Problem statement (paraphrased):
Given an integer n from 1 to 10, print n factorial, the product of all
integers from 1 through n.
*/

#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        long long sum = 1;
        for (int i = 1; i <= n; ++i) {
            sum *= i;
        }
        cout << sum << "\n";
    }
    return 0;
}
