/*
Codeforces 116A - Tram
Source: https://codeforces.com/problemset/problem/116/A

Problem statement (paraphrased):
At each of n tram stops, a_i passengers leave before b_i passengers enter.
The tram starts and ends empty. Find the smallest capacity that is never
exceeded during the trip.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int c = 0, d = 0;
    int max = 0;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        c -= a;
        c += b;
        if (c > max) {
            max = c;
        }
    }
    cout << max << endl;
    return 0;
}
