#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> user;
    string s;
    long long traffic = 0;
    while (getline(cin, s)) {
        if (s.empty()) {
            continue;
        }
        if (s[0] == '+') {
            string name = s.substr(1);
            user.insert(name);
        } 
        else if (s[0] == '-') {
            string name = s.substr(1);
            user.erase(name);
        } 
        else {
            size_t pos = s.find(':');
            string message = s.substr(pos + 1);
            traffic += (long long)message.length() * user.size();
        }
    }
    cout << traffic << "\n";
    return 0;
}