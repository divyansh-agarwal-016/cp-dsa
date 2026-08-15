#include<bits/stdc++.h>
using namespace std;

int main() {
    // Basic Implementation
    int arr[] = {5, 6, 5, 6, 9, 6};
    int count = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] == 6) {
            count++;
        }
    }
    cout << count << endl;  
    return 0;

    // Optimised Approach
    int arr2[] = {5, 6, 5, 6, 9, 6};
    int hashTable[10] = {0};
    for(int i = 0; i < 6; i++) {
        hashTable[arr2[i]]++;
    }
    cout << hashTable[6] << endl;  // Output: 3
    return 0;

    // Pseudo Code for Character Hash Map
    /**
        n - input
        char arr[n]
        hash[n] = {0}
        for( i from 0 till n - 1 ){
            input - arr[i]
            hash[arr[i]]++
            hash['a']++ translates to hash[97]++
        }
        x - Input
        while(x--){
            char ch - Input
            print(hash[ch])
        }

        ASCII values = 'a' = 97 - 'z' = 122

        n - input
        char arr[n]
        hash[26] = {0}
        for( i from 0 till n - 1 ){
            input - arr[i]
            hash[arr[i] - 'a']++
            hash['a']++ translates to hash[97]++
        }
 
        x - Input
        while(x--){
            char ch - Input
            print(hash[ch] - 'a')
        }
    */
    
}