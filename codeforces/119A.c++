/*
Codeforces 119A - Epic Game
Source: https://codeforces.com/problemset/problem/119/A

Problem statement (paraphrased):
Simon and Antisimon alternately remove stones from a heap, with Simon moving
first. Simon must remove gcd(a, remaining) stones and Antisimon must remove
gcd(b, remaining). A player loses when the heap contains fewer stones than the
required amount. Print 0 if Simon wins, otherwise 1.
*/
#include "bits/stdc++.h"

using namespace std;

int gcd (int a, int b) {
    if (b == a) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    while (true) {
        int d = gcd(a, c);
        if (c < d) {
            cout << 1 << "\n";
            return 0;
        }
        c -= d;
        
        int e = gcd(b, c);
        if (c < e) {
            cout << 0 << "\n";
            return 0;
        }
        c -= e;
    }
    
    return 0;
}