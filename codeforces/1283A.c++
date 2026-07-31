#include "bits/stdc++.h"

using namespace std;

int main(void)
{
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int h, m;
        cin >> h >> m;
        int n = (23 - h) * 60 + (60 - m);
        cout << n << endl;
    }
    return 0;
}
