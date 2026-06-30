#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;

    if (n % 2 == 0){
        a = n + 4;
        b = 4;
        cout << a << " " << b << endl;
    }else{
        a = n + 9;
        b = 9;
        cout << a << " " << b << endl;

    }
}