#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string J, S;
        cin >> J >> S;

        int cnt = 0;

        for (int i = 0; i < S.size(); i++) {
            for (int j = 0; j < J.size(); j++) {
                if (S[i] == J[j]) {
                    cnt++;
                    break;
                }
            }
        }

        cout << cnt << endl;
    }
}