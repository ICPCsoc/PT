/*
Codeforces 125A - Measuring Lengths in Baden
Source: https://codeforces.com/problemset/problem/125/A

Problem statement (paraphrased):
In Baden, one inch equals 3 centimeters and one foot equals 12 inches. Convert
n centimeters to the nearest whole number of inches, then print that length as
the maximum possible whole feet followed by the remaining inches. The stated
rounding makes 1 cm become 0 inches and 2 cm become 1 inch.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    if (cin >> a) {
        int b = (a + 1) / 3;
        int c = b / 12;
        int d = b % 12;
        cout << c << " " << d << "\n";
    }
    return 0;
}