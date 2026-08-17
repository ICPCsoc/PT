/*
Codeforces 19A - World Football Cup
Source: https://codeforces.com/problemset/problem/19/A

Problem statement (paraphrased):
Given an even number n of football teams and every pairwise match result,
rank teams by points (3 for a win, 1 for a draw), then goal difference, then
goals scored; the ranking is guaranteed unambiguous. Select the best n/2
teams and print their names in lexicographical order, one per line.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<string> names(n);
    vector<int> pts(n, 0), diff(n, 0), goals(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }
    int matches = n * (n - 1) / 2;
    for (int i = 0; i < matches; ++i) {
        string s, score;
        cin >> s >> score;
        int pos = s.find('-');
        string t1 = s.substr(0, pos);
        string t2 = s.substr(pos + 1);
        int pos_colon = score.find(':');
        int g1 = stoi(score.substr(0, pos_colon));
        int g2 = stoi(score.substr(pos_colon + 1));
        int idx1 = find(names.begin(), names.end(), t1) - names.begin();
        int idx2 = find(names.begin(), names.end(), t2) - names.begin();
        goals[idx1] += g1; diff[idx1] += (g1 - g2);
        goals[idx2] += g2; diff[idx2] += (g2 - g1);
        if (g1 > g2) pts[idx1] += 3;
        else if (g1 < g2) pts[idx2] += 3;
        else { pts[idx1]++; pts[idx2]++; }
    }
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        p[i] = i;
    }
    sort(p.begin(), p.end(), [&](int a, int b) {
        if (pts[a] != pts[b]) return pts[a] > pts[b];
        if (diff[a] != diff[b]) return diff[a] > diff[b];
        return goals[a] > goals[b];
    });

    // Lấy n / 2 đội top đầu
    vector<string> res;
    for (int i = 0; i < n / 2; ++i) {
        res.push_back(names[p[i]]);
    }

    // Sắp xếp tên theo thứ tự từ điển
    sort(res.begin(), res.end());

    for (const string& name : res) {
        cout << name << "\n";
    }

    return 0;
}
