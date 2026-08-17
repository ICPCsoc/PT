/*
Codeforces 84A - Toy Army
Source: https://codeforces.com/problemset/problem/84/A

Problem statement (paraphrased):
Two armies initially contain n soldiers each, where n is even. Valera shoots,
then Arcady shoots with surviving soldiers, then Valera shoots again. On a
turn each surviving attacker selects one enemy target, simultaneous shots
always kill their targets, and several attackers may choose the same target.
Print the maximum total number of soldiers that can be killed in three turns.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    if (!(cin >> a)) return 0;

    long long b = a + a / 2;
    cout << b << "\n";

    return 0;
}
