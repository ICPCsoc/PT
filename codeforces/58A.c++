/*
Codeforces 58A - Chat Room
Source: https://codeforces.com/problemset/problem/58/A

Problem statement (paraphrased):
Given a lowercase string s, determine whether deleting zero or more
characters without changing the order of the remaining characters can produce
the word "hello". Print YES if possible, otherwise NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    if (cin >> s) {
        string name = "hello";
        int a = 0;

        for (char c : s) {
            if (c == name[a]) {
                a++;
                if (a == name.length()) {
                    break;
                }
            }
        }

        if (a == name.length()) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
