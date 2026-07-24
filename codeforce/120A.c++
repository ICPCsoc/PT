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
