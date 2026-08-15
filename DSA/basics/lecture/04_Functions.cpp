#include <bits/stdc++.h>
using namespace std;

void printHello(){
    cout << "Hello World";
}

int sum(int a, int b){
    int result = a+b;
    return result;
}

// int incremenet(int n){
//     n++;
//     return n;
// }

// int main(){
//     int a = 3;
//     cout << a << endl;
//     incremenet(a);
//     cout << a << endl;
// }

int incremenet(int &n){ // Pass by Reference
    n++;
    return n;
}

int main(){
    int a = 3;
    cout << a << endl;
    incremenet(a);
    cout << a << endl;
}

