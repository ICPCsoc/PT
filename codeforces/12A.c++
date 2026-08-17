/*
Codeforces 12A - Super Agent
Source: https://codeforces.com/problemset/problem/12/A

Problem statement (paraphrased):
Read a 3 by 3 pattern whose cells contain X or '.'. Determine whether the
pattern is centrally symmetric: rotating it by 180 degrees must leave every
cell unchanged. Print YES if it is symmetric and NO otherwise.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> arr(3);
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    bool b = true;
    if (arr[0][0] != arr[2][2]) {
        b = false;
    }
    if (arr[0][1] != arr[2][1]) {
        b = false;
    }
    if (arr[0][2] != arr[2][0]) {
        b = false;
    }
    if (arr[1][0] != arr[1][2]) {
        b = false;
    }
    if (b) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}
