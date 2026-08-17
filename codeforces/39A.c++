/*
Codeforces 39A - C*++ Calculations
Source: https://codeforces.com/problemset/problem/39/A

Problem statement (paraphrased):
Given an initial integer a and an expression made from signed terms of the
form a++, ++a, coefficient*a++, or coefficient*++a, evaluate its largest
possible value. Every term is evaluated exactly once, but terms may be
evaluated in any order; prefix and postfix increments have their usual
effects before all term values are summed.
*/

#include "bits/stdc++.h"

using namespace std;

struct Term {
    int coeff;
    bool is_prefix;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a;
    string s;
    cin >> s >> a;
    vector<Term> terms;
    int sign = 1;
    int i = 0;
    int n = s.length();
    while (i < n) {
        if (s[i] == '+') {
            sign = 1;
            i++;
        } 
        else if (s[i] == '-') {
            sign = -1;
            i++;
        }
        int coeff = 1;
        if (isdigit(s[i])) {
            coeff = 0;
            while (i < n && isdigit(s[i])) {
                coeff = coeff * 10 + (s[i] - '0');
                i++;
            }
            i++;
        }
        bool is_prefix = false;
        if (s[i] == '+' && s[i + 1] == '+') {
            is_prefix = true;
            i += 3; 
        } 
        else {
            is_prefix = false;
            i += 3; 
        }
        terms.push_back({sign * coeff, is_prefix});
    }
    sort(terms.begin(), terms.end(), [](const Term& x, const Term& y) {
        return x.coeff < y.coeff;
    });
    long long ans = 0;
    for (const auto& t : terms) {
        if (t.is_prefix) {
            a++;
            ans += t.coeff * a;
        } else {
            ans += t.coeff * a;
            a++;
        }
    }
    cout << ans << "\n";
    return 0;
}
