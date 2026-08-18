#include<bits/stdc++.h>
using namespace std;
/** BASIC THEORY, How do we make a hash function & how do we store it
Hashing is essentially a technique for converting a key into an array index so that we can access the corresponding data very quickly.
A hash function can produce same array index for different key Eg - 23%10 = 3 & 33%10 = 3
A collision means: Two different keys produce the same hash index.
    Collisions are unavoidable in general.
    Hashing itself isn't the problem. The Problem is - What do we do when two keys want the same position?
2 Approaches to Solve this
    Separate Chaining We could make each index capable of holding multiple elements: index 3 → 23 → 33 → 43 - The chaining happens in sorted order

    The Second approach - Every element must live directly inside the hash table array. If its preferred position is occupied, we'll find another empty position. - Internal Hashing
    Example 
        Suppose: 23 → 3, 33 → 3
        23 gets index 3. When 33 comes: index 3 → occupied
        Instead of creating a chain, we look for another empty position.
        The simplest method is linear probing:
        3 → 4 → 5 → 6 → ...
        So:
        23 → index 3
        33 → index 4
        43 → index 5
    And then you get different probing techniques:
    Internal Hashing - Open Addressing - Linear Probing, Quadratic Probing, Double Hashing


                     HASHING
                        │
                        │
                        ↓
            Why do we need hashing?
                        │
                        ↓
Need FAST insertion / search / deletion approximately O(1)
                        │
                        ↓
                    HASH TABLE
                        │
                        ↓
            Array used to store data
                        │
                        ↓
            We have a KEY e.g. 123456
                        │
                        ↓
                Need an ARRAY INDEX
                        │
                        ↓
                 HASH FUNCTION
                        │
     ┌──────────────────┼──────────────────┐
     │                  │                  │
     ↓                  ↓                  ↓
DIVISION METHOD    FOLDING METHOD    MID-SQUARE METHOD
     │                  │                  │
     │                  │                  │
     └──────────────────┼──────────────────┘
                        ↓
              HASH VALUE / INDEX
                        │
                        ↓
                Example: index = 56
                        │
                        ↓
                Is index 56 empty?
                /              \
               YES              NO
                │                │
                ↓                ↓
            STORE            COLLISION
                                 │
                                 ↓
                      Need collision resolution
                                 │
                                 ↓
                    INTERNAL HASHING (OPEN ADDRESSING)
                                 │
                ┌────────────────┼────────────────┐
                │                │                │
                ↓                ↓                ↓
          LINEAR PROBING   QUADRATIC PROBING  DOUBLE HASHING
                │                │                │
                ↓                ↓                ↓
        Find next slot     Find slot using    Use second
        sequentially       quadratic jumps   hash function
                │                │                │
                └────────────────┼────────────────┘
                                 ↓
                         Find EMPTY SLOT
                                 │
                                 ↓
                               STORE

Hash function decides the first place to look.
Internal hashing decides what to do when that place is already occupied.
*/

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