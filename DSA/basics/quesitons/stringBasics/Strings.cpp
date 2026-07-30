#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string c = a+b;
    string d;

    cout << a.size() << " " << b.size() << endl;
    cout << c << endl;

    d[0] = a[0];
    a[0] = b[0];
    b[0] = d[0];

    cout << a << " " << b << endl;
}