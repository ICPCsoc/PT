/*
Codeforces 57A - Square Earth?
Source: https://codeforces.com/problemset/problem/57/A

Problem statement (paraphrased):
Two points lie on the boundary of a square with side n and corners (0,0),
(n,0), (0,n), and (n,n). Travel is allowed only along the square's sides.
Print the length of the shorter boundary path between the two points.
*/

#include "bits/stdc++.h"

using namespace std;

int a(int n, int x, int y) {
    if (y == 0) return x;
    if (x == n) return n + y;
    if (y == n) return 2 * n + (n - x);
    return 3 * n + (n - y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x1, y1, x2, y2;
    if (cin >> n >> x1 >> y1 >> x2 >> y2) {
        int p1 = a(n, x1, y1);
        int p2 = a(n, x2, y2);
        int b = abs(p1 - p2);
        int c = 4 * n - b;
        cout << min(b, c) << "\n";
    }
    return 0;
}
