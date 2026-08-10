#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        long long sum = 1;
        for (int i = 1; i <= n; ++i) {
            sum *= i;
        }
        cout << sum << "\n";
    }
    return 0;
}