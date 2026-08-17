/*
Codeforces 319A - Malek Dance Club
Source: https://codeforces.com/problemset/problem/319/A

Problem statement (paraphrased):
There are 2^n members on each side, labeled 0 through 2^n-1. Member i on the
first side is paired with member (i XOR x) on the second, where x is supplied as
an n-bit binary string. The assignment's complexity is the number of pairs of
assignments (a,b), (c,d) with a<c but b>d. Print this count modulo 1,000,000,007.
*/
