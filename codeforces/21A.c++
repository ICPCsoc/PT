/*
Codeforces 21A - Jabber ID
Source: https://codeforces.com/problemset/problem/21/A

Problem statement (paraphrased):
Check whether a string is a valid Jabber ID of the form username@hostname
with an optional /resource. Usernames and resources contain 1 to 16 letters,
digits, or underscores. A hostname is 1 to 32 characters and consists of
dot-separated non-empty parts, each obeying the same 1-to-16 character rule.
Print YES for a valid ID and NO otherwise.
*/

#include "bits/stdc++.h"
using namespace std;

bool val(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || (c == '_');
}

bool isval(const string& s) {
    if (s.empty() || s.length() > 16) {
        return false;
    }
    for (char c : s) {
        if (!val(c)) {
            return false;
        }
    }
    return true;
}

bool ishost(const string& a) {
    if (a.empty() || a.length() > 32) {
        return false;
    }
    if (a.front() == '.' || a.back() == '.') {
        return false;
    }
    stringstream ss(a);
    string word;
    int count = 0;
    while (getline(ss, word, '.')) {
        if (!isval(word)) {
            return false;
        }
        count++;
    }
    return count > 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    size_t a = s.find('@');
    if (a == string::npos || s.find('@', a + 1) != string::npos) {
        cout << "NO\n";
        return 0;
    }
    string user = s.substr(0, a);
    string rest = s.substr(a + 1);

    if (!isval(user)) {
        cout << "NO\n";
        return 0;
    }
    size_t b = rest.find('/');
    string d, c;
    bool e = (b != string::npos);

    if (e) {
        d = rest.substr(0, b);
        c = rest.substr(b + 1);
        if (c.find('/') != string::npos) {
            cout << "NO\n";
            return 0;
        }
    } else {
        d = rest;
    }
    if (!ishost(d)) {
        cout << "NO\n";
        return 0;
    }
    if (e && !isval(c)) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}
