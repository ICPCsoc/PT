/*
Codeforces 135A - Replacement
Source: https://codeforces.com/problemset/problem/135/A

Problem statement (paraphrased):
You must replace exactly one array element by a different integer from 1 to
10^9, then sort the array in nondecreasing order. For every sorted position,
determine the minimum value that could occupy that position over all valid
replacements, and print these n minima.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    int sum1 = 0;
    for (int i =0 ;i < n; i++) {
        if (arr[i] == 1) {
            sum1++;
        }
    }
    if (sum1 == n) {
        arr[n - 1] = 2;
        for (auto i : arr) {
            cout << i << " ";
        }
        cout << endl;
        return 0;
    }
    else {
        sort(arr.begin(), arr.end());
        arr[n - 1] = 1;
        sort(arr.begin(), arr.end());
        for (auto i : arr) {
            cout << i << " ";
        }
        cout << endl;
        return 0;
    }
    return 0;
}