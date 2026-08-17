/*
Codeforces 68A - Irrational Problem
Source: https://codeforces.com/problemset/problem/68/A

Problem statement (paraphrased):
Four distinct moduli p1, p2, p3, and p4 may be applied to x in any of their
24 orders as successive remainder operations. For every integer x in [a,b],
count how many orders leave the value equal to x. Print how many x values are
unchanged by at least 7 of the 24 possible orders.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p1, p2, p3, p4, a, b;
    if (cin >> p1 >> p2 >> p3 >> p4 >> a >> b) {
        int p = min({p1, p2, p3, p4});
        int c = min(b, p - 1);

        if (c >= a) {
            cout << (c - a + 1) << "\n";
        } 
        else {
            cout << 0 << "\n";
        }
    }
    return 0;
}
