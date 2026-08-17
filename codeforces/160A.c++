/*
Codeforces 160A - Twins
Source: https://codeforces.com/problemset/problem/160/A

Problem statement (paraphrased):
Given n coin values, choose the fewest coins whose total value is strictly
greater than the total value of all unchosen coins. Print that minimum count.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int current_sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        current_sum += arr[i];
        count++;
        if (current_sum > sum - current_sum) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
