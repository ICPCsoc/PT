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