/*
Codeforces 73A - The Elder Trolls IV: Oblivon
Source: https://codeforces.com/problemset/problem/73/A

Problem statement (paraphrased):
A solid x by y by z block consists of unit cells. One strike cuts along a
grid plane parallel to a face, and because all pieces stay in place, a later
plane may cut several pieces at once. With at most k strikes, find the maximum
number of pieces obtainable.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y, z, k; cin >> x >> y >> z;
    long long arr[3] = {x, y, z};
    sort(arr, arr + 3);
    x = arr[0];
    y = arr[1];
    z = arr[2];
    long long max_a = 1;
    for (long long a = 1; a <= x; ++a) {
        long long sum = k + 3 - a;
        if (sum < 2) continue;
        long long S = min(sum, y + z);
        long long b = min(S / 2, y);
        long long c = S - b;
        if (c > z) {
            c = z;
            b = S - c;
        }
        if (b >= 1 && b <= y && c >= 1 && c <= z) {
            long long d = a * b * c;
            max_a = max(max_a, d);
        }
    }
    cout << max_a << "\n";
    return 0;
}
