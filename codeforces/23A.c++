/*
Codeforces 23A - You're Given a String...
Source: https://codeforces.com/problemset/problem/23/A

Problem statement (paraphrased):
Given a lowercase string of length at most 100, find the maximum length of a
substring that occurs at least twice in the string. The two occurrences are
allowed to overlap. Print that maximum length.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int n = s.length();
    for (int i = n - 1; i >= 1; --i) {
        unordered_map<string, int> arr;
        for (int j = 0; j <= n - i; ++j) {
            string temp = s.substr(j, i);
            arr[temp]++;
            if (arr[temp] >= 2) {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}
