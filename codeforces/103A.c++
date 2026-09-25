/*
Codeforces 103A - Testing Pants for Sadness
Source: https://codeforces.com/problemset/problem/103/A

Problem statement (paraphrased):
A test has n questions answered in a fixed order, and question i has a_i
choices with exactly one correct choice. A wrong click resets the test to the
first question, but all discovered answers are remembered. Find the minimum
number of clicks sufficient to guarantee passing the test in the worst case.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    long long a;
    cin >> a;
    long long b = 0;
    for (long long c = 1; c <= a; c++) {
        long long d;
        cin >> d;
        b += (d - 1) * c + 1;
    }
    cout << b << endl;
    return 0;
}