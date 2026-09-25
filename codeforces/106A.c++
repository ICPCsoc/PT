/*
Codeforces 106A - Card Game
Source: https://codeforces.com/problemset/problem/106/A

Problem statement (paraphrased):
A 36-card deck has ranks 6, 7, 8, 9, T, J, Q, K, A and four suits. Given the
trump suit and two different cards, determine whether the first card beats the
second. It does so when both suits match and its rank is higher, or when it is
a trump card and the second card is not. Print YES or NO.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    char a;
    cin >> a;
    string b, c;
    cin >> b >> c;
    
    string d = "6789TJQKA";
    auto e = [&](char f) {
        return d.find(f);
    };
    
    if (b[1] == c[1]) {
        if (e(b[0]) > e(c[0])) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        if (b[1] == a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}