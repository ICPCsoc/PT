/*
Codeforces 87A - Trains
Source: https://codeforces.com/problemset/problem/87/A

Problem statement (paraphrased):
Trains toward Dasha arrive every a minutes and trains toward Masha every b
minutes, with schedules sharing a simultaneous arrival. Vasya arrives at a
uniformly arbitrary time and takes the next train. On a tie, he chooses the
direction whose trains are less frequent. Print Dasha, Masha, or Equal
according to which destination he visits more often.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    long long c = std::gcd(a, b);
    long long d = a / c;
    long long e = b / c;

    if (abs(d - e) == 1) {
        cout << "Equal\n";
    } else if (d < e) {
        cout << "Dasha\n";
    } else {
        cout << "Masha\n";
    }

    return 0;
}
