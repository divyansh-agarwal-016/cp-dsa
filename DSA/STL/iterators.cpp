#include<bits/stdc++.h>
using namespace std;

// int main(){
   
//     /*** 2 Iterators
//     .begin() - Points to the first element of vector V[0]
//     .end() - Poinst to next to last element v(N)
//     */

//     // vector<int> v = {2, 3, 5, 6, 7};
//     // for(int i=0; i<v.size(); i++){
//     //     cout << v[i] << " ";
//     // }
//     // cout << endl;
//     // vector<int> ::iterator it = v.begin();
//     // cout << (*it) << endl; // Output = 2
//     // cout << (*it+1) << endl; // Output = 3

//     // Printing Vector with help of Iterators
//     // vector<int> :: iterator it = v.begin();
//     // for(it = v.begin(); it != v.end(); ++it){
//     //     cout << (*it) << endl;
//     // }

//     vector<pair<int,int> > v_p = {{1,2},{2,3},{3,4}};
//     vector<pair<int,int> > :: iterator it;
//     // for(it = v_p.begin(); it != v_p.end(); ++it){
//     //     cout << (*it).first << " " << (*it).second << endl;
//     // }
//     // Same output the syntax is different
//     for(it = v_p.begin(); it != v_p.end(); ++it){
//         cout << (it->first)<< " " << (it->second) << endl;
//     }
// }

/** Difference between it++ & it+1 when iterating through a container
    They are not the same in some cases
        Vectors - They are stored in continous block of memory so if we do this the result will be the same
        but in the cases of maps & some other container they are not stores in continous block of memory they are spread across the whole memory so if we do it+1 it will move to the next location in the memory which will be invalid so we should always use it++ it will take us to the valid index

*/

int main(){
    vector <int> v = {2, 3, 5, 6, 7};
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << endl;

    // OLD WAY OF WRITING
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
    // NEW WAY OF WRITING
    for(int value : v){ // The value is getting copied these are not actual values -> Use ampersand for(int &value : v) to send actual values 
        cout << value << " ";
    }
    cout << endl;
}

int main(){
    vector<pair<int,int>> v_p = {{1,2}, {2,3}};
    // for(pair<int, int> &value : v_p){
    //     cout << value.first << " " << value.second << endl;
    // }
    for(auto &value : v_p){
        cout << value.first << " " << value.second << endl;
    }

}