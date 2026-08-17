/*
Codeforces 311A - The Closest Pair
Source: https://codeforces.com/problemset/problem/311/A

Problem statement (paraphrased):
Given n and k, construct n distinct integer points within coordinates +/-1e9
that make the specified closest-pair pseudocode execute its inner loop more than
k times. The code sorts points by x then y, updates the current Euclidean
distance, and stops an inner scan when the x difference reaches that distance.
Print suitable points, or "no solution" if no such test can exist.
*/
