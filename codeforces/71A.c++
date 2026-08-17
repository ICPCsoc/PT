/*
Codeforces 71A - Way Too Long Words
Source: https://codeforces.com/problemset/problem/71/A

Problem statement (paraphrased):
For each input word, leave it unchanged when its length is at most 10.
Otherwise abbreviate it using its first letter, the number of omitted middle
letters, and its last letter. Print the transformed words.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s.length() <= 10) {
            cout << s << endl;
        } 
        else {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }
    return 0;
}
