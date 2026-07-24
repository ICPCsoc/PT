#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    if (!(cin >> s >> t)){
        return 0;
    }
    int x1 = s[0] - 'a';
    int y1 = s[1] - '1';
    int x2 = t[0] - 'a';
    int y2 = t[1] - '1';
    int steps = max(abs(x1 - x2), abs(y1 - y2));
    cout << steps << "\n";
    while (x1 != x2 || y1 != y2){
        string move = "";
        if (x1 < x2){
            move += "R";
            x1++;
        }
        else if (x1 > x2){
            move += "L";
            x1--;
        }
        if (y1 < y2){
            move += "U";
            y1++;
        }
        else if (y1 > y2){
            move += "D";
            y1--;
        }
        cout << move << "\n";
    }
    return 0;
}