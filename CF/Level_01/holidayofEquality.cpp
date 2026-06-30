// Problem Link - https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MAX = 105;
    int arr[MAX];

    int answer = 0;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        answer += mx - arr[i];
    }

    cout << answer << endl;

    return 0;
}