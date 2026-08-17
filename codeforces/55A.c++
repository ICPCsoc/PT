/*
Codeforces 55A - Flea Travel
Source: https://codeforces.com/problemset/problem/55/A

Problem statement (paraphrased):
n hassocks are arranged in a circle. Starting on one hassock, after minute k
a flea moves clockwise by k positions (passing k-1 hassocks). Given unlimited
time, determine whether it will visit every hassock. Print YES or NO.
*/

#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        if ((n & (n - 1)) == 0) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
