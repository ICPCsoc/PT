/*
Codeforces 122A - Lucky Division
Source: https://codeforces.com/problemset/problem/122/A

Problem statement (paraphrased):
A lucky number contains only digits 4 and 7. Given n, print YES if n is
divisible by at least one lucky number; otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> b = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool c = false;
    for (int d : b) {
        if (a % d == 0) {
            c = true;
            break;
        }
    }
    if (c) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}