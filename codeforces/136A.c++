/*
Codeforces 136A - Presents
Source: https://codeforces.com/problemset/problem/136/A

Problem statement (paraphrased):
There are n friends and p_i is the friend who receives a gift from friend i.
Every friend receives exactly one gift. For each friend from 1 to n, print the
number of the friend who gave that person a gift.
*/

#include <iostream>
#include <vector>

using namespace std;

void solve(int i, int n, const vector<int>& p, vector<int>& result) {
    if (i > n) return;
    int receiver = p[i - 1];
    result[receiver - 1] = i;
    solve(i + 1, n, p, result);
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    solve(1, n, p, result);
    for (int i = 0; i < n; i++) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
    return 0;
}
