/*
Codeforces 81A - Plug-in
Source: https://codeforces.com/problemset/problem/81/A

Problem statement (paraphrased):
Repeatedly delete any pair of equal adjacent letters from a lowercase string.
New equal pairs created by a deletion must also be removed. The final result
is independent of deletion order and is guaranteed non-empty. Print it.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    if (!(cin >> a)) return 0;

    string b = "";
    for (char c : a) {
        if (!b.empty() && b.back() == c) {
            b.pop_back();
        } else {
            b.push_back(c);
        }
    }

    cout << b << "\n";

    return 0;
}
