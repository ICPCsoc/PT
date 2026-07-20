#include "bits/stdc++.h"

using namespace std;

void printFeeling(int current, int n) {
    if (current % 2 != 0) {
        cout << "I hate";
    } 
    else {
        cout << "I love";
    }
    if (current < n) {
        cout << " that ";
        printFeeling(current + 1, n);
    } 
    else {
        cout << " it";
    }
}

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }
    printFeeling(1, n);
    cout << endl;
    return 0;
}