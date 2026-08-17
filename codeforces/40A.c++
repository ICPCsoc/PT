/*
Codeforces 40A - Find Color
Source: https://codeforces.com/problemset/problem/40/A

Problem statement (paraphrased):
The infinite plane represents a clock painted in the alternating black-and-
white circular pattern shown in the original statement. Given integer
coordinates (x, y), print the colour containing that point. Every boundary,
including points at an integer distance from the origin, is considered black.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b; cin >> a >> b;
    int d = floor(sqrt(pow(a, 2) + pow(b, 2)));
    if (d % 2 == 0) {
        cout << "white" << endl;
    }
    else {
        cout << "black" << endl;
    }
    return 0;
}
