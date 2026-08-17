/*
Codeforces 43A - Football
Source: https://codeforces.com/problemset/problem/43/A

Problem statement (paraphrased):
Each of n lines names the team that scored one goal in a football final.
There are at most two teams and the final score is not tied. Print the name
of the team that scored more goals.
*/

#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a, b;
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (i == 0) {
            a = s;
            sum1++;
        }
        else {
            if (s == a) {
                sum1++;
            }
            else {
                b = s;
                sum2++;
            }
        }
    }
    if (sum1 < sum2) {
        cout << b << endl;
    }
    else {
        cout << a << endl;
    }
    return 0;
}
