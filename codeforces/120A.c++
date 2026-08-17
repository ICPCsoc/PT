/*
Codeforces 120A - Elevator
Source: https://codeforces.com/problemset/problem/120/A

Problem statement (paraphrased):
An elevator has front and back doors and two handrails. Rail 1 is on the left
when entering through the front and on the right when entering through the
back; rail 2 is opposite. Given the entrance door and the rail held by a VIP,
print L if the person is left-handed or R if right-handed.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string door;
    int rail;
    cin >> door >> rail;
    if (door == "front") {
        if (rail == 1) cout << "L";
        else cout << "R";
    } else {
        if (rail == 1) cout << "R";
        else cout << "L";
    }
    return 0;
}
