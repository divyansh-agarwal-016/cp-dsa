#include <bits/stdc++.h>
using namespace std;
/** 
The array/vector need to be in sorted order for it to work in O(log(n)) complexity otherwise it will run O(N) complexity
When we find lower_bound of an number it can be either the number itself or number just greater that it available 
When we find upper_bound of an number it will be number always greater than it

It returns us pointer in case of array & iterator in case of vector
lower_bound/upper_bound = (iterator first, iterator last, value)

*/


// int main(){
//     int n;
//     cin >> n;
//     int a[n];

//     for(int i=0; i < n; i++){
//         cin >> a[i];
//     }

//     sort(a, a+n);

//     for(int i = 0; i<n; i++){
//         cout << a[i] << " ";
//     }

//     cout << endl;

//     int *ptr = lower_bound(a, a+n, 5);
//     if(ptr == (a+n)){
//         cout << "Not Found";
//         return 0;
//     }
//     cout << (*ptr) << endl;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);

//     for(int i=0; i<n; i++){
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     for(int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     auto it = upper_bound(a.begin(), a.end(), 5);

//     if(it == a.end()){
//         cout << "Not Found";
//         return 0;
//     }
//     cout << (*it) << endl;
// }


/** In Case of Maps & Sets the below implementation will work O(N) not as O(log(N)) so it will give TLE */
int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<(int)(1e6); i++){
        s.insert(rand());
    }
    for(int i=0; i<(int)1e5; i++){
        auto it = lower_bound(s.begin(), s.end(), rand()); // O(N)
        auto it = s.lower_bound(rand()); // O(LOg(N))
    }
}