/*
Codeforces 128A - Statues
Source: https://codeforces.com/problemset/problem/128/A

Problem statement (paraphrased):
On an 8x8 board, Maria starts at the lower-left corner and wants to reach Anna
at the upper-right. Maria moves first and may stay or enter any adjacent cell
without a statue. After each move, every statue shifts one row downward; Maria
loses if a statue occupies her cell. Determine whether she can force a win and
print WIN or LOSE.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (cin >> a >> b) {
        double c, d;
        cin >> c >> d;
        
        double g = 0;
        for (int h = 1; h < a; ++h) {
            double e, f;
            cin >> e >> f;
            g += sqrt((e - c) * (e - c) + (f - d) * (f - d));
            c = e;
            d = f;
        }
        
        double i = (g * b) / 50.0;
        cout << fixed << setprecision(9) << i << "\n";
    }

    return 0;
}