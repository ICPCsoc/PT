/*
Codeforces 124A - The Number of Positions
Source: https://codeforces.com/problemset/problem/124/A

Problem statement (paraphrased):
Petr stands somewhere in a line of n people. At least a people are ahead of
him and at most b people are behind him. Count how many positions in the line
can satisfy both facts.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    if (cin >> n >> a >> b) {
        int result = min(n - a, b + 1);
        cout << result << "\n";
    }
    return 0;
}