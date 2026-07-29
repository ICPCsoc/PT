#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a, b,c;
    cin >> a >> b >> c;
    if ((a.size() == b.size() && a.size() == c.size()) || (a == "rock" && b == "scissors" && c == "papper") || (c == "rock" && a == "scissors" && b == "papper") || (b == "rock" && c == "scissors" && a == "papper")) {
        cout << "?" << endl;
    }
    else if ((a == "rock" && b == "scissors" && c == "scissors") || (a == "paper" && b == "rock" && c == "rock") || (a == "scissors" && b == "rock" && c == "rock")) {
        cout << "F" << endl;
    }
    else if ((b == "rock" && a == "scissors" && c == "scissors") || (b == "paper" && a == "rock" && c == "rock") || (b == "scissors" && a == "rock" && c == "rock")) {
        cout << "M" << endl;
    }
    else if ((c == "rock" && b == "scissors" && a == "scissors") || (c == "paper" && b == "rock" && a == "rock") || (c == "scissors" && b == "rock" && a == "rock")) {
        cout << "S" << endl;
    }
    return 0;
}