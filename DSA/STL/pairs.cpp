#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;
    // cin >> p.first;
    // cout << p.first;

    // Initialize pair in 2 ways
    // p = make_pair(2, "abc");
    p = { 2, "abc"};
    // cout << p.first << " " << p.second << endl;

    // without sending reference
    pair<int, string> p1 = p; // Output - 2 abc
    p1.first = 3;

    // with Reference
    // pair<int, string> &p1 = p; // Output - 3 abc
    // p1.first = 3;
    
    // cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];

    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    
    // for(int i=0; i<3; i++){
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }

    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}