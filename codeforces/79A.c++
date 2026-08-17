/*
Codeforces 79A - Bus Game
Source: https://codeforces.com/problemset/problem/79/A

Problem statement (paraphrased):
A pile contains x 100-yen coins and y 10-yen coins. Ciel and Hanako alternate,
starting with Ciel, and must take exactly 220 yen. Ciel chooses a valid payment
using as many 100-yen coins as possible; Hanako chooses one using as many
10-yen coins as possible. A player unable to pay loses. Print the winner.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    int c = 0;
    while (true) {
        bool d = false;
        if (c % 2 == 0) {
            for (int e = 2; e >= 0; --e) {
                int f = 22 - e * 10;
                if (a >= e && b >= f) {
                    a -= e;
                    b -= f;
                    d = true;
                    break;
                }
            }
        } else {
            for (int e = 0; e <= 2; ++e) {
                int f = 22 - e * 10;
                if (a >= e && b >= f) {
                    a -= e;
                    b -= f;
                    d = true;
                    break;
                }
            }
        }

        if (!d) {
            if (c % 2 == 0) {
                cout << "Hanako\n";
            } else {
                cout << "Ciel\n";
            }
            break;
        }

        c++;
    }

    return 0;
}
