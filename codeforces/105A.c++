/*
Codeforces 105A - Transmigration
Source: https://codeforces.com/problemset/problem/105/A

Problem statement (paraphrased):
A character has n named skills and is reincarnated into a class with m class
skills. Multiply each old skill level x by k and take the integer part; discard
an old skill if the result is below 100. Then add every class skill not
currently present with level 0. Print the final number of skills followed by
their names and levels in lexicographic order.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    int a, b;
    double c;
    cin >> a >> b >> c;
    
    int d = round(c * 100);
    map<string, int> e;
    
    for (int f = 0; f < a; f++) {
        string g;
        int h;
        cin >> g >> h;
        int i = (h * d) / 100;
        if (i >= 100) {
            e[g] = i;
        }
    }
    
    for (int j = 0; j < b; j++) {
        string k;
        cin >> k;
        if (e.find(k) == e.end()) {
            e[k] = 0;
        }
    }
    
    cout << e.size() << "\n";
    for (auto l : e) {
        cout << l.first << " " << l.second << "\n";
    }
    
    return 0;
}