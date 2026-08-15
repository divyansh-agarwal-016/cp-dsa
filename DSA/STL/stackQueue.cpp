#include <bits/stdc++.h>
using namespace std;
/***
Stack - LIFO
    Types of Operation
        push
        pop
        top
Queue - FIFO
    Types of Operation
        push
        pop
        front
*/
// BASIC
// int main(){
//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     while(!s.empty()){
//         cout << s.top() << endl;
//         s.pop();
//     }

//     queue<string> q;
//     q.push("a");
//     q.push("abc");
//     q.push("bcd");
//     q.push("cde");
//     q.push("pqeq");

//     while(!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
// }

// Question - Balanced Brackets - https://www.hackerrank.com/challenges/balanced-brackets/problem

string isBalanced(string s){
    stack<char> st;
          
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
}