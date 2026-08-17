/*
Codeforces 100A - Carpeting the Room
Source: https://codeforces.com/problemset/problem/100/A

Problem statement (paraphrased):
A square room has side n and there are k square carpets, each with side n1.
Carpets may overlap but must be placed without rotation. Determine whether
they can cover every point of the room. Print YES if complete coverage is
possible, otherwise NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k, n1;
    cin >> n >> k >> n1;
    if (1LL * k * n1 * n1 >= 1LL * n * n){
        cout << "YES";}
    else{
        cout << "NO";}
    return 0;
}
