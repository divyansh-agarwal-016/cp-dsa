#include <bits/stdc++.h> // header files
using namespace std;

int main(){
    // cout << 7/2; // Output = 3
    // cout << 7/2.0; // Output = 3.5
    // cout << 'c' + 1; // Output = 100
    // // Calculation happens in higher data type
    //     // The Order of datatype - arranged in decreasing order
    //     // Double - Float - Long Long Int - Long Int - Int - Characters
    
    // int f = 3/2.0; 
    // // Here the output is 1 because we are storing it in int datatype so even though 1.5 got calculated it got changed to 1
    // cout << f; // Output = 1

    // double d = 3/2;
    // //First calculation happens then its gets stored in the variable
    // cout << d; // Output = 1

    // OVERFLOW
    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    int a = 10000;
    int b = 10000;
    int c = a*b;
    cout << c << endl; // OUTPUT - Maximum value the int can store

    long long d = 10000;
    long long f = 10000;
    long long e = d*f;
    cout << e << endl;
}

