/*
Codeforces 138A - Literature Lesson
Source: https://codeforces.com/problemset/problem/138/A

Problem statement (paraphrased):
Two poem lines rhyme when their suffixes beginning at the k-th vowel from the
end are equal; a line with fewer than k vowels cannot rhyme. For each of n
quatrains, consider the schemes aabb, abab, abba, and aaaa. Print the single
scheme compatible with every quatrain, using aaaa only when all four lines in
every quatrain rhyme, or print NO if no common scheme exists.
*/

#include "bits/stdc++.h"

using namespace std;

bool f(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string g(const string &a, int b)
{
    int c = 0;
    for (int d = a.length() - 1; d >= 0; --d)
    {
        if (f(a[d]))
        {
            c++;
            if (c == b)
            {
                return a.substr(d);
            }
        }
    }
    return "";
}

string h(const vector<string> &a, int b)
{
    vector<string> c(4);
    for (int d = 0; d < 4; ++d)
    {
        c[d] = g(a[d], b);
        if (c[d].empty())
            return "NO";
    }
    if (c[0] == c[1] && c[1] == c[2] && c[2] == c[3])
        return "aaaa";
    if (c[0] == c[1] && c[2] == c[3])
        return "aabb";
    if (c[0] == c[2] && c[1] == c[3])
        return "abab";
    if (c[0] == c[3] && c[1] == c[2])
        return "abba";
    return "NO";
}

int main()
{
    int a, b;
    cin >> a >> b;
    string c = "aaaa";
    for (int d = 0; d < a; ++d)
    {
        vector<string> e(4);
        for (int f = 0; f < 4; ++f)
            cin >> e[f];

        string g = h(e, b);

        if (g == "NO")
        {
            cout << "NO\n";
            return 0;
        }

        if (c == "aaaa")
        {
            c = g;
        }
        else if (g != "aaaa" && g != c)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << c << "\n";
    return 0;
}