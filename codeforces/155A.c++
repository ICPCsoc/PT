/*
Codeforces 155A - I_love_%username%
Source: https://codeforces.com/problemset/problem/155/A

Problem statement (paraphrased):
Given a coder's contest scores in chronological order, count performances after
the first that are strictly higher than every earlier score or strictly lower
than every earlier score.
*/

#include "bits/stdc++.h" 

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int amazing = 0;
    int score, min_score, max_score;
    for (int i = 1; i <= n; i++) {
        cin >> score;
        if (i == 0) {
            min_score = max_score = score;
        } else {
            if (score > max_score) {
                amazing++;
                max_score = score;
            } else if (score < min_score) {
                amazing++;
                min_score = score;
            }
        }
    }
    cout << amazing << endl;
    return 0;
}
