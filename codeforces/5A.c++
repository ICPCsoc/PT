/*
Codeforces 5A - Chat Server's Outgoing Traffic
Source: https://codeforces.com/problemset/problem/5/A

Problem statement (paraphrased):
Process up to 100 chat-server commands. A line beginning with '+' adds one
user, a line beginning with '-' removes one user, and a line of the form
name:message sends the message to every user currently in the chat. Adding
or removing users produces no traffic; sending a message of length l to k
users produces l * k bytes. Print the total outgoing traffic.
*/

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