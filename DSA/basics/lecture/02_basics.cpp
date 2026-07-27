#include <bits/stdc++.h>
using namespace std;

int main(){
    // int a = 2;
    // int b = 4;
    // cout << ( a == b ) << endl;
    // cout << ( a != b ) << endl;

    /*for(initalisation; conditions; operations){

    }*/

    for(int i = 0; i < 10; cout << ++i << endl){
        // This is a valid for loop
    }

    // Sum of N Digits
    // int n;
    // cin >> n;
    // int sum = 0;
    // while(n > 0){
    //     int last_digit = n % 10;
    //     sum = sum + last_digit;
    //     n = n/10;
    // }
    // cout << sum << endl;

    // How cin >> str; works => It breaks at space ' ' or line change or /n

    string str1 = "Hello";
    string str2 = "World";

    string result = str1 + str2;

    if(str1 == str2){
        cout << "Equal";
    }else{
        cout << "Not Equal";
    }

    cout << str1[0]; // str[index] => Also this gives a character not a string so one more thing to keep in mind that we should avoid adding a character to a String

    str1[0] = 'a';
    cout << str1;
    cout << str1.size();

    for(int i = 0; i<str1.size(); i++){
        cout << str1[i] << endl;
    }

    // Method 01 - Input of 2 strings as one string
    string str3, str4;
    cin >> str3 >> str4;
    string str5 = str3 + " "  + str4
    cout << str5;
    
    // Method 02 
    getline(cin, str3);
    cout << str3;

    // Method 03
    int t;
    cin >> t;
    while(t--){
        string s;
        getline(cin, s);
        cout << s << endl;
    }
    /** Input
    3
    abc def
    ijk lmn
    opq rst

    output

    abc def
    ijk lmn
    no 3rd line
    Read More About It
    */ 

    string s = "Hello";
    cout << s[s.size()] << endl;

    string s2;
    cin >> s2;
    int last_digit = s[s.size() - 1] - '0';
    cout << last_digit;
}

