// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     int ct = 0;
//     for (int i=0; i<s.size(); i++){
//         if(s[i] == 'A'){
//             ct++;
//             if(ct = 2){
//                 cout << "false" << endl;
//                 return 0;
//             }
//         }else if(s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L'){
//             cout << "false" << endl;
//             return 0;
//         }else
//             cout << "true" << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ct = 0;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == 'A') {
            ct++;
            if (ct >= 2) {
                cout << "false" << endl;
                return 0;
            }
        }

        if (i + 2 < s.size() && s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L') {
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;

    return 0;
}