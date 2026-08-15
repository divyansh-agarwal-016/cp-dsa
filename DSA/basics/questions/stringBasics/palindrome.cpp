#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s, n;
    cin >> s;

    for(int i=(int)s.size()-1; i>=0; i--){
        n += s[i];
    }

    if(n == s){
        cout << "YES";
    }else{
        cout << "NO";
    }
}