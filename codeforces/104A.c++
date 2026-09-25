/*
Codeforces 104A - Blackjack
Source: https://codeforces.com/problemset/problem/104/A

Problem statement (paraphrased):
In a standard 52-card deck, the first drawn card is the queen of spades and is
worth 10. Cards 2 through 10 have their face value, jacks, queens, and kings
are worth 10, and an ace may be worth 1 or 11. Given a target total n, count
how many individual remaining cards could be drawn second to obtain n.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a;
    cin >> a;
    int b = a - 10;
    
    if (b <= 0 || b > 11) {
        cout << 0 << endl;
    } else if (b == 10) {
        cout << 15 << endl;
    } else if (b == 11) {
        cout << 4 << endl;
    } else {
        cout << 4 << endl;
    }
    return 0;
}