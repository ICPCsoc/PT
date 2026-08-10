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