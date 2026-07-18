#include <bits/stdc++.h> // header files
using namespace std;

int main(){
    cout << 7/2; // Output = 3
    cout << 7/2.0; // Output = 3.5
    cout << 'c' + 1; // Output = 100
    // Calculation happens in higher data type
        // The Order of datatype - arranged in decreasing order
        // Double - Float - Long Long Int - Long Int - Int - Characters
    
    int fa = 3/2.0; 
    // Here the output is 1 because we are storing it in int datatype so even though 1.5 got calculated it got changed to 1
    cout << fa; // Output = 1

    double da = 3/2;
    //First calculation happens then its gets stored in the variable
    cout << da; // Output = 1

    // OVERFLOW
    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout << c << endl; // OUTPUT - Maximum value the int can store 1410065408 but not 10000000000

    long long d = 100000;
    long long e = 100000;
    long long f = d*e;
    cout << f << endl; // OUTPUT - 10000000000

    int g = 100000;
    int h = 100000;
    long long i = g*h;
    cout << i << endl; // OUTPUT - 1410065408 because the calculation happens first then its gets stored in the long long so the int can't calculate to 10^10


}

