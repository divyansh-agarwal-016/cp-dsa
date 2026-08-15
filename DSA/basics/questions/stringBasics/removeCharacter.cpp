#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, str2;
    cin >> str >> str2;

    string ans = "";

    for (int i = 0; i < str.size(); i++) {
        bool found = false;

        for (int j = 0; j < str2.size(); j++) {
            if (str[i] == str2[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            ans += str[i];
        }
    }

    cout << ans << endl;

    return 0;
}