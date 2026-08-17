/*
Codeforces 77A - Heroes
Source: https://codeforces.com/problemset/problem/77/A

Problem statement (paraphrased):
Assign seven named heroes to three non-empty teams, one for each boss worth
a, b, and c experience. Every member of a team receives floor(boss XP/team
size). First minimize the difference between the most and least XP received
by any hero; among those assignments, maximize the number of directed
"likes" relations whose endpoints are teammates. Print both optimum values.
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    if (!(cin >> a)) return 0;

    map<string, int> b;
    b["Anka"] = 0;
    b["Chapay"] = 1;
    b["Cleo"] = 2;
    b["Troll"] = 3;
    b["Dracul"] = 4;
    b["Snowy"] = 5;
    b["Hexadecimal"] = 6;

    vector<vector<bool>> c(7, vector<bool>(7, false));
    for (int d = 0; d < a; ++d) {
        string e, f, u;
        cin >> e >> f >> u;
        c[b[e]][b[u]] = true;
    }

    long long d, e, f;
    cin >> d >> e >> f;

    vector<int> p = {0, 1, 2, 3, 4, 5, 6};

    long long best_diff = -1;
    int max_like = -1;

    vector<long long> exp_boss = {d, e, f};

    for (int mask1 = 1; mask1 < 127; ++mask1) {
        for (int mask2 = 1; mask2 < 127; ++mask2) {
            if (mask1 & mask2) continue;
            int mask3 = 127 ^ mask1 ^ mask2;
            if (mask3 == 0) continue;

            vector<int> team_size(3, 0);
            for (int i = 0; i < 7; ++i) {
                if ((mask1 >> i) & 1) team_size[0]++;
                else if ((mask2 >> i) & 1) team_size[1]++;
                else team_size[2]++;
            }

            vector<long long> boss_perm = {0, 1, 2};
            do {
                long long min_exp = -1, max_exp = -1;
                for (int i = 0; i < 3; ++i) {
                    long long hero_exp = exp_boss[boss_perm[i]] / team_size[i];
                    if (min_exp == -1 || hero_exp < min_exp) min_exp = hero_exp;
                    if (max_exp == -1 || hero_exp > max_exp) max_exp = hero_exp;
                }

                long long diff = max_exp - min_exp;

                int likes = 0;
                for (int i = 0; i < 7; ++i) {
                    for (int j = 0; j < 7; ++j) {
                        if (i != j && c[i][j]) {
                            if (((mask1 >> i) & 1) && ((mask1 >> j) & 1)) likes++;
                            else if (((mask2 >> i) & 1) && ((mask2 >> j) & 1)) likes++;
                            else if (((mask3 >> i) & 1) && ((mask3 >> j) & 1)) likes++;
                        }
                    }
                }

                if (best_diff == -1 || diff < best_diff || (diff == best_diff && likes > max_like)) {
                    best_diff = diff;
                    max_like = likes;
                }

            } while (next_permutation(boss_perm.begin(), boss_perm.end()));
        }
    }

    cout << best_diff << " " << max_like << "\n";

    return 0;
}
