/*
Codeforces 78A - Haiku
Source: https://codeforces.com/problemset/problem/78/A

Problem statement (paraphrased):
Read three lines of a poem. Treat each occurrence of a, e, i, o, or u as one
syllable. Print YES if the three lines contain exactly 5, 7, and 5 syllables
respectively; otherwise print NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    auto d = [](const string& e) {
        int f = 0;
        for (char u : e) {
            if (u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u') {
                f++;
            }
        }
        return f;
    };

    if (d(a) == 5 && d(b) == 7 && d(c) == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
