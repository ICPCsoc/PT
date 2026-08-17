/*
Codeforces 158A - Next Round
Source: https://codeforces.com/problemset/problem/158/A

Problem statement (paraphrased):
n contestants' scores are given in nonincreasing order. A contestant advances
when their score is positive and at least the score of the contestant in k-th
place. Print the number who advance.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k;cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= arr[k - 1] && arr[i] > 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
