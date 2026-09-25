/*
Codeforces 132A - Turing Tape
Source: https://codeforces.com/problemset/problem/132/A

Problem statement (paraphrased):
An INTERCAL-style procedure turns an array of bytes into text by reversing the
bits of the previous printed character's code, subtracting the current array
element modulo 256, and reversing the result's bits to obtain the next
character. Given the printed text, reconstruct and print the original array,
one integer per line.
*/
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s;
    getline(cin, s);
    int n = s.length();
    int r = 0;
    for (int i = 0; i < n; i++) {
        char temp = s[i];
        bitset<8> temp01(temp);
        string name = temp01.to_string();
        reverse(name.begin(), name.end());
        int a = stoi(name, nullptr, 2);
        if (i == 0) {
            int step1 = r - a;
            r = a;
            int step2 = ( step1 % 256 + 256 ) % 256;
            cout << step2 << endl;
        }
        else {
            int step1 = r - a;
            r = a;
            int step2 = ( step1 % 256 + 256 ) % 256;
            cout << step2 << endl;
        }
    }
    return 0;
}
