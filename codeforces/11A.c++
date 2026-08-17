/*
Codeforces 11A - Increasing Sequence
Source: https://codeforces.com/problemset/problem/11/A

Problem statement (paraphrased):
Given a sequence of n integers and a positive integer d, one move chooses an
element and adds d to it. Find the minimum number of moves required to make
the sequence strictly increasing.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, d;
    if (!(cin >> n >> d)) return 0;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    long long ans = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] <= arr[i - 1]) {
            long long diff = arr[i - 1] - arr[i];
            long long steps = diff / d + 1;
            ans += steps;
            arr[i] += steps * d;
        }
    }
    cout << ans << "\n";
    return 0;
}
