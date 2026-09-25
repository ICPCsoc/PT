/*
Codeforces 134A - Average Numbers
Source: https://codeforces.com/problemset/problem/134/A

Problem statement (paraphrased):
Given n positive integers, find every 1-based index i for which a_i equals the
arithmetic mean of all the other n-1 elements. Print the number of such indices
and then list them in increasing order.
*/

#include "bits/stdc++.h"

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort (vector<int>& arr, int left, int right)  {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main (void) {
    int n; cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int sum1 = sum / n;
    int ans = 0;
    vector<int> brr;
    for (int i = 0; i < n; i++) {
        if (arr[i] == sum1) {
            ans++;
            brr.push_back(i);
        }
    }
    cout << ans << endl;
    int v = brr.size() - 1;
    merge_sort(brr, brr[0], brr[v]);
    for (auto a : brr) {
        cout << a + 1 << " ";
    }
    cout << endl;
    return 0;
}