/*
Codeforces 131A - cAPS lOCK
Source: https://codeforces.com/problemset/problem/131/A

Problem statement (paraphrased):
Given one word, toggle the case of every letter if either all letters are
uppercase or every letter except possibly the first is uppercase. Otherwise,
leave the word unchanged. Print the resulting word.
*/
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s; cin >> s;
    int sum1 = 0;
    int sum2 = 0;
    int n = s.length();
    if (s[0] >= 'a' && s[0] <= 'z') {
        sum2++;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            sum1++;
        }
    }
    if (sum1 == n) {
        string name = "";
        for (int i = 0; i < n; i++) {
            name += s[i] + 32;
        }
        cout << name << endl;
        return 0;
    }
    if (sum1 == n - 1 && sum2 == 1) {
        string name = "";
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                name += s[i] + 32;
            }
            if (s[i] >= 'a' && s[i] <= 'z') {
                name += s[i] - 32;
            }
        }
        cout << name << endl;
        return 0;
    }
    else {
        cout << s << endl;
        return 0;
    }
    return 0;
}