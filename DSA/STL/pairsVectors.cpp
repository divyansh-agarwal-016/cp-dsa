#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;

    // Initialize pair in 2 ways
    // p = make_pair(2, "abc");
    p = { 2, "abc"};

    // without sending reference
    pair<int, string> p1 = p;
    p1.first = 3;

    // with Reference
    pair<int, string> &p1 = p;
    p1.first = 3;
    
    cout << p.first << " " << p.second << endl;
}