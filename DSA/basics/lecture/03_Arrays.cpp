#include <bits/stdc++.h>
using namespace std;

int main(){
    // Declaration
    int a[0];

    int n;
    cin >> n;
    int b[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }
    // Segementation Fault - Whenever we try to access memory that was never allocated 
    // Locally declaring array the maximum order in which we can declare it => 10^5
    // Globally declaring array the maximum order in which we can declare it => 10^7
     
    int x, y;
    cin >> x >> y;
    int c[x][y];
    
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}