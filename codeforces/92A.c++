/*
Codeforces 92A - Chips
Source: https://codeforces.com/problemset/problem/92/A

Problem statement (paraphrased):
n walruses sit in a circle. Starting at number 1, walrus i must receive i
chips, then the process repeats from walrus 1. Given m initial chips, stop
when the current walrus cannot receive the required amount and print the
number of chips left.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (!(cin >> a >> b)) return 0;

    int c = a * (a + 1) / 2;
    b %= c;

    for (int d = 1; d <= a; ++d) {
        if (b >= d) {
            b -= d;
        } else {
            break;
        }
    }

    cout << b << "\n";

    return 0;
}
