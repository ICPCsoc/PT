#include <iostream>

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[105], b = 0, c = 0, d = -1, e = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            b++;
            d = i + 1;
        } else {
            c++;
            e = i + 1;
        }
    }
    if (b == 1) {
        cout << d;
    }
    else {
        cout << e;
    }
    return 0;
}
