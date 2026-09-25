/*
Codeforces 127A - Wasted Time
Source: https://codeforces.com/problemset/problem/127/A

Problem statement (paraphrased):
A signature is the polyline through n given points in order. It is drawn at a
constant speed of 50 millimeters per second and has been written on k papers.
Compute the total number of seconds spent drawing all signatures.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, d, e;
    if (cin >> a >> b >> c >> d >> e) {
        if (a == e && b == e) {
            cout << c << " " << d << "\n";
            return 0;
        }
        if (b == e) {
            cout << 0 << " " << d << "\n";
            return 0;
        }
        
        long long f = 0, g = d;
        
        for (long long h = 0; h <= c; ++h) {
            long long i = (e - a) * h;
            long long j = (i + b - e - 1) / (b - e);
            
            if (h == 0) {
                j = d;
            }
            
            if (j <= d) {
                long long k = (a - e) * f + (b - e) * g;
                long long l = f + g;
                long long m = (a - e) * h + (b - e) * j;
                long long n = h + j;
                
                if (m * l < k * n) {
                    f = h;
                    g = j;
                } else if (m * l == k * n) {
                    if (n > l) {
                        f = h;
                        g = j;
                    }
                }
            }
        }
        
        cout << f << " " << g << "\n";
    }

    return 0;
}