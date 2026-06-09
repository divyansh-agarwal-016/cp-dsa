// Module 04 Day 01
// problem statement => https://atcoder.jp/contests/abc242/tasks/abc242_b
// Time Complexity of a sorting algo => O(N log N)
/**
 * Constraint => S is a string of length between 1 and 2×10^5 (inclusive) 
 * N = S = length of the string
 * O(|S| log |S|)
    * 200000 × log₂(200000)
    * 200000 × 18
    * 3.6 million operations
 */
#include <bits/stdc++.h>

using namespace std;


int main(){
    string str; 
    cin >> str;

    sort(str.begin(), str.end()); // arrange the string in ascending order
//  sort(str.begin(), str.end(), greater<char>()); // Descending Order
//      greater<char>() => gWhen comparing two chars, treat the larger one as coming first.

    cout << str << endl;
}

