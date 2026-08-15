#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout << "Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // vector<int> v;
    // int n;
    // cin >> n;

    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     // printVec(v);
    //     v.push_back(x); // Adds value to the last - TC - O(1)
    // }
    // printVec(v);

    // vector<int>v1(5);
    // printVec(v1); // OUTPUT Size: 5 -> 0 0 0 0 0

    // vector<int>v2(5);
    // v2.push_back(5);
    // printVec(v2); // OUTPUT Size: 6 - 0 0 0 0 0 5

    // vector<int>v3(5, 3);
    // printVec(v3); // OUTPUT Size: 5 - 3 3 3 3 3

    // vector<int>v4(5, 4);
    // v4.pop_back(); // TC - O(1) - Removes the last element
    // printVec(v4);

    vector<int>v5;
    v5.push_back(7);
    v5.push_back(6);

    vector<int>v6 = v5; // Copying the vector as it is & its TC is - O(N)
    v6.push_back(5);
    printVec(v5);
    printVec(v6);
}