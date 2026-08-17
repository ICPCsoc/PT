/*
Codeforces 45A - Codecraft III
Source: https://codeforces.com/problemset/problem/45/A

Problem statement (paraphrased):
Given the English name of the current month and an integer k, determine the
month that occurs exactly k months later, wrapping around the twelve-month
calendar as necessary. Print its English name.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> arr = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    string a;
    int k;
    cin >> a >> k;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        if (arr[i] == a) {
            sum = i;
            break;
        }
    }
    int sum1 = (sum + k) % 12;
    cout << arr[sum1] << "\n";
    return 0;
}
