/*
Codeforces 137A - Postcards and Photos
Source: https://codeforces.com/problemset/problem/137/A

Problem statement (paraphrased):
Postcards and photos appear in a row and must be removed from left to right.
At most five objects can be carried at once, and objects of different types
cannot be carried together. Find the minimum number of trips to the closet
needed to remove the entire row.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s; cin >> s;
    int n = s.length();
    int i = 0;
    int sum = 0;
    while (i < n) {
        int temp = 0;
        char a = s[i];
        while (i < n && s[i] == a && temp < 5) {
            temp++;
            i++;
        }
        sum++;
    }
    cout << sum << "\n";
    return 0;
}