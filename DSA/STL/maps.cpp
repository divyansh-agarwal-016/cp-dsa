#include<bits/stdc++.h>
using namespace std;


// ORDERED MAPS
// void print(map<int,string> &m){
//     cout << m.size() << endl;
//     for(auto &pr : m){
//         cout << pr.first << " " << pr.second << endl;
//     }
// }

// int main(){
//     map<int, string> m;
//     m[1] = "abc"; // TC for insertion - O(log(n))
//     m[5] = "cdc";
//     m[3] = "acd";
//     m[6]; // Even though we haven't written any value here still it will O(log(n)) TC
//     m.insert({4, "afg"});
    
//     // map<int,string> :: iterator it;
//     // for(it = m.begin(); it != m.end(); ++it){
//     //     cout << (*it).first << " " << (*it).second << endl;
//     // }

//     // for(auto &pr : m){
//     //     cout << pr.first << " " << pr.second << endl;
//     // }

//     auto it = m.find(3); // NOTE - This will return an iterator
//                         // TC - O(log(n))
//     /** In this case it will RETURN the iterator of 3
//     And if the key doesn't exist it will return the iterator of m.end()
//     */
//     if(it == m.end()){
//         cout << "No Value";
//     }else{
//         cout << (*it).first << " " << (*it).second << endl;
//     }
//     // Can give both values either the iterator or the value of key, TC - O(log(n))
//     m.erase(it);
//     m.erase(5); 

//     // print(m);
// }

/**Notes
    You cannot insert duplicate keys
    To access any element the TC - O(log(n))
    if both the key & value are of same datatype lets say string so everytime we insert a key it will compare itself with other keys in order to get stored in sorted order so we need to keep in mind that we can't store big strings as keys otherwise the TC will be s.size() * O(log(n)) 
*/

// UNORDERED MAPS

/***
1. In-built Implementation - They use hash tables not trees 
2. Time Complexity for accessing & inserting - O(1), m.find(), m.erase() also have same TC
3. Valid keys datatype - 

*/

void print(unordered_map<int, string> &m){
    cout << m.size() << endl;
    for(auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    

    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "ab";
    m[5] = "cde";

    print(m);
}