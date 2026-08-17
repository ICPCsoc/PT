/*
Codeforces 59A - Word
Source: https://codeforces.com/problemset/problem/59/A

Problem statement (paraphrased):
Convert a mixed-case word entirely to the case requiring the fewest changes.
If it contains more uppercase than lowercase letters, print it in uppercase;
otherwise, including a tie, print it in lowercase.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char s[101];
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
        else if (s[i] >= 'a' && s[i] <= 'z') lower++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (upper > lower) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            }
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    }
    cout << s << endl;
    return 0;
}
