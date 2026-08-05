#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'G'){
            ans += 'G';
        }else if(s[i] == '('){
            if(s[i+1] == ')'){
                ans += 'o';
                i++;
            }else{
                ans += "al";
                i += 3;
            }
        }
    }
    cout << ans << endl;
}