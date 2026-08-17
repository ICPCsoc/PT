/*
Codeforces 89A - Robbery
Source: https://codeforces.com/problemset/problem/89/A

Problem statement (paraphrased):
n cells hold diamonds. After every minute a security system verifies that
all sums of adjacent cell pairs equal their initial values. During each of k
minutes Joe may move at most m individual diamonds between cells, from a cell
to his unlimited pocket, or back from the pocket. His pocket starts empty and
the system must never detect a changed adjacent sum. Print the maximum number
of diamonds he can leave with.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    vector<long long> d(a);
    for (int e = 0; e < a; ++e) {
        cin >> d[e];
    }

    if (a % 2 == 0) {
        cout << 0 << "\n";
        return 0;
    }

    long long e = (a + 1) / 2;
    long long f = b * c;

    long long min_val = d[0];
    for (int i = 0; i < a; i += 2) {
        min_val = min(min_val, d[i]);
    }

    long long ans = min(min_val, f / e);
    cout << ans << "\n";

    return 0;
}
