/*
Codeforces 129A - Cookies
Source: https://codeforces.com/problemset/problem/129/A

Problem statement (paraphrased):
There are n bags containing a_i cookies. Count how many choices of exactly one
bag to remove leave an even total number of cookies in all remaining bags.
*/
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (sum % 2 == 0) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                temp++;
            }
        }
        cout << temp << endl;
        return 0;
    }
    else {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                temp++;
            }
        }
        cout << temp << endl;
        return 0;
    }
    return 0;
}