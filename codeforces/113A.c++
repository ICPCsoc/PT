/*
Codeforces 113A - Grammar Lessons
Source: https://codeforces.com/problemset/problem/113/A

Problem statement (paraphrased):
Validate one sentence in Petya's artificial language. Word suffixes determine
gender and whether a word is an adjective, noun, or verb. A multiword sentence
must contain zero or more adjectives, exactly one noun, then zero or more
verbs, and all its words must have the same gender. A single valid word is also
a valid sentence. Print YES if the input satisfies these rules, otherwise NO.
*/
#include "bits/stdc++.h"

using namespace std;

int main() {
    vector<string> a;
    string b;
    while (cin >> b) {
        a.push_back(b);
    }
    if (a.size() == 1) {
        string c = a[0];
        if (c.size() >= 4 && c.substr(c.size() - 4) == "lios") {
             cout << "YES\n"; return 0; 
        }
        if (c.size() >= 5 && c.substr(c.size() - 5) == "liala") {
             cout << "YES\n"; return 0; 
        }
        if (c.size() >= 3 && c.substr(c.size() - 3) == "etr") {
             cout << "YES\n"; return 0; 
        }
        if (c.size() >= 4 && c.substr(c.size() - 4) == "etra") {
             cout << "YES\n"; return 0; 
        }
        if (c.size() >= 6 && c.substr(c.size() - 6) == "initis") {
             cout << "YES\n"; return 0; 
        }
        if (c.size() >= 6 && c.substr(c.size() - 6) == "inites") {
             cout << "YES\n"; return 0; 
        }
        cout << "NO\n";
        return 0;
    }
    vector<pair<int, int>> d;
    for (string c : a) {
        if (c.size() >= 4 && c.substr(c.size() - 4) == "lios") {
            d.push_back({0, 0});
        } 
        else if (c.size() >= 5 && c.substr(c.size() - 5) == "liala") {
            d.push_back({1, 0});
        } 
        else if (c.size() >= 3 && c.substr(c.size() - 3) == "etr") {
            d.push_back({0, 1});
        } 
        else if (c.size() >= 4 && c.substr(c.size() - 4) == "etra") {
            d.push_back({1, 1});
        } 
        else if (c.size() >= 6 && c.substr(c.size() - 6) == "initis") {
            d.push_back({0, 2});
        } 
        else if (c.size() >= 6 && c.substr(c.size() - 6) == "inites") {
            d.push_back({1, 2});
        } 
        else {
            cout << "NO\n";
            return 0;
        }
    }
    int e = d[0].first;
    int f = 0;
    int g = 0;
    for (auto h : d) {
        if (h.first != e) {
            cout << "NO\n";
            return 0;
        }
        if (h.second == 1) {
            f++;
        }
        if (h.second < g) {
            cout << "NO\n";
            return 0;
        }
        g = h.second;
    }
    if (f == 1) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
    return 0;
}