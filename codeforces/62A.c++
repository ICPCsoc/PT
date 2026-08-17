/*
Codeforces 62A - A Student's Dream
Source: https://codeforces.com/problemset/problem/62/A

Problem statement (paraphrased):
A girl has al and ar fingers on her left and right hands; a boy has bl and br.
They hold one pair of opposite hands, and either person may stand on the left.
Their interleaved fingers must have no adjacent pair of the girl's fingers
and no three consecutive fingers of the boy. Print YES if at least one of the
two possible hand pairings admits such an arrangement; otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

bool can_hold(int g, int b) {
    return (b >= g - 1) && (b <= 2 * g + 2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int al, ar;
    int bl, br;
    if (cin >> al >> ar >> bl >> br) {
        bool opt1 = can_hold(al, br) && can_hold(ar, bl);
        bool opt2 = can_hold(al, bl) && can_hold(ar, br);
        if (opt1 || opt2) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
