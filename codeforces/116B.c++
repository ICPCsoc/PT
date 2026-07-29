#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m;
    cin >> n >> m;
    char a[15][15];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;
    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'W') {
                for (int k = 0; k < 4; k++) {
                    int ni = i + x[k], nj = j + y[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == 'P') {
                        sum++;
                        a[ni][nj] = '.';
                        break;
                    }
                }
            }
        }
    }

    cout << sum << "\n";
    return 0;
}