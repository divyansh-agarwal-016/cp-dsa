#include <bits/stdc++.h>
using namespace std;


// Ordered Set
// void print(set<string> &s){
//     for(string value : s){
//         cout << value << endl;
//     }
//     // for(auto it = s.begin(); it != s.end(); it++){
//     //     cout << (*it) << endl;
//     // }
// }


// int main(){
//    set<string> s;
//    // Unique Keys
//     s.insert("abc"); // log(n)
//     s.insert("def");
//     s.insert("ghi");

//     auto it = s.find("abc"); // log(n)

//     if(it != s.end()){
//         cout << (*it);
//         s.erase(it);
//     }

//     print(s);
// }


// Unordered Set
// We can't complex datatype - sets, map - only simple datatype - int, string
// void print(set<string> &s){
//     for(string value : s){
//         cout << value << endl;
//     }
//     // for(auto it = s.begin(); it != s.end(); it++){
//     //     cout << (*it) << endl;
//     // }
// }


// int main(){
//    unordered_set<string> s;
//    // Unique Keys
//     s.insert("abc"); // O(1)
//     s.insert("def");
//     s.insert("ghi");

//     auto it = s.find("abc"); // O(1)

//     if(it != s.end()){
//         cout << (*it);
//         s.erase(it);
//     }

//     print(s);
// }

// Multi Set
void print(set<string> &s){
    for(string value : s){
        cout << value << endl;
    }
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout << (*it) << endl;
    // }
}


int main(){
   Multiset<string> s; // can add same values 
    s.insert("abc"); // log(n)
    s.insert("def");
    s.insert("ghi");
    s.insert("ghi");

    auto it = s.find("abc");

    if(it != s.end()){
        cout << (*it);
        s.erase(it); // Delete the element that the iterator is pointing towards
    }
    s.erase("ghi") // delete all the ghi elements from multiset

    print(s);
}

