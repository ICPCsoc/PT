/*
Codeforces 101A - Homework
Source: https://codeforces.com/problemset/problem/101/A

Problem statement (paraphrased):
You are given a lowercase string of length n and may delete at most k
characters. Minimize the number of distinct letters in the remaining
subsequence, then print that minimum and any subsequence achieving it.
If the whole string can be deleted, print 0 followed by an empty line.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;
    vector<pair<int, char>> c(26);
    for (int d = 0; d < 26; d++) {
        c[d] = {0, d + 'a'};
    }
    for (char e : a) {
        c[e - 'a'].first++;
    }
    sort(c.begin(), c.end());
    
    vector<bool> f(26, false);
    int g = 0;
    
    for (int h = 0; h < 26; h++) {
        if (c[h].first > 0) {
            if (b >= c[h].first) {
                b -= c[h].first;
                f[c[h].second - 'a'] = true;
            } else {
                g++;
            }
        }
    }
    
    cout << g << endl;
    for (char e : a) {
        if (!f[e - 'a']) {
            cout << e;
        }
    }
    cout << endl;
    return 0;
}