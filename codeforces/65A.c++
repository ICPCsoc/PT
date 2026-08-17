/*
Codeforces 65A - Harry Potter and Three Spells
Source: https://codeforces.com/problemset/problem/65/A

Problem statement (paraphrased):
Three repeatable spells convert a grams of sand to b grams of lead, c grams
of lead to d grams of gold, and e grams of gold to f grams of sand. Starting
from some finite amount of sand and no lead or gold, determine whether the
available conversions can produce an arbitrarily large amount of gold. Print
Ron if they can, otherwise print Hermione.
*/

#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c, d, e, f;
    if (cin >> a >> b >> c >> d >> e >> f) {
        bool g = (b * d * f > a * c * e);
        if (e == 0 || (b > 0 && d > 0 && e > 0 && g)) {
            if (e == 0 && f > 0 && b > 0 && d > 0) {
                cout << "Ron\n";
            } 
            else if (g) {
                cout << "Ron\n";
            } 
            else {
                cout << "Hermione\n";
            }
        } else {
            cout << "Hermione\n";
        }
    }

    return 0;
}
