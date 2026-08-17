/*
Codeforces 88A - Chord
Source: https://codeforces.com/problemset/problem/88/A

Problem statement (paraphrased):
The twelve notes C, C#, D, D#, E, F, F#, G, G#, A, B, H form a cycle. Given
three notes, classify their unordered triad. It is major if some cyclic order
has gaps of 4 then 3 semitones, minor if the gaps are 3 then 4, and strange
otherwise. Print the corresponding word.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> a = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    
    string b, c, d;
    if (!(cin >> b >> c >> d)) return 0;

    auto e = [&](const string& s) {
        for (int i = 0; i < 12; ++i) {
            if (a[i] == s) return i;
        }
        return -1;
    };

    vector<int> f = {e(b), e(c), e(d)};
    sort(f.begin(), f.end());

    bool is_major = false;
    bool is_minor = false;

    do {
        int x = f[0], y = f[1], z = f[2];
        int dist1 = (y - x + 12) % 12;
        int dist2 = (z - y + 12) % 12;

        if (dist1 == 4 && dist2 == 3) is_major = true;
        if (dist1 == 3 && dist2 == 4) is_minor = true;
    } while (next_permutation(f.begin(), f.end()));

    if (is_major) {
        cout << "major\n";
    } else if (is_minor) {
        cout << "minor\n";
    } else {
        cout << "strange\n";
    }

    return 0;
}
