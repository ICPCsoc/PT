/*
Codeforces 27A - Next Test
Source: https://codeforces.com/problemset/problem/27/A

Problem statement (paraphrased):
Given n distinct positive integers used as test indices, print the smallest
positive integer that is not already present.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int MAX = 1000002;
    bool present[MAX] = {};
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] < MAX)
        {
            present[a[i]] = true;
        }
    }

    for (int i = 1; i < MAX; i++)
    {
        if (!present[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
