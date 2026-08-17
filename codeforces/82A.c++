/*
Codeforces 82A - Double Cola
Source: https://codeforces.com/problemset/problem/82/A

Problem statement (paraphrased):
Sheldon, Leonard, Penny, Rajesh, and Howard initially stand in that order in
a queue. Each person who drinks a cola leaves the front and places two copies
of their name at the back. Given n, print the name of the person who drinks
the n-th cola.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    if (!(cin >> a)) return 0;

    vector<string> b = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    long long c = 1;
    while (a > 5 * c) {
        a -= 5 * c;
        c *= 2;
    }

    long long d = (a - 1) / c;
    cout << b[d] << "\n";

    return 0;
}
