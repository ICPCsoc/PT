/*
Codeforces 26A - Almost Prime
Source: https://codeforces.com/problemset/problem/26/A

Problem statement (paraphrased):
An integer is almost prime when it has exactly two distinct prime divisors.
Given n (1 <= n <= 3000), count the almost-prime integers from 1 through n.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (arr[i] == 0) {
            for (int j = i; j <= n; j += i) {
                arr[j]++;
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] == 2) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
