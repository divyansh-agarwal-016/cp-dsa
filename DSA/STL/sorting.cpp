#include <bits/stdc++.h>
using namespace std;

// BASIC SORTING
// int main(){
//     // int n;
//     // cin >> n;
//     // int a[n];
//     // for(int i=0; i<n; i++){
//     //     cin >> a[i];
//     // }
//     // sort(a, a+n);
//     // for(int i = 0; i < n; i++){
//     //     cout << a[i] << " ";
//     // }
//     // cout << endl;

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
// }

//  Comparator Function
// If you're defining custom behavior then comparator function says if you want to swap return false & if you don't want to swap return true
// bool swap(pair<int,int> a, pair<int,int> b){
//     if(a.first != b.first){
//         if(a.first > b.first) return false;
//         return true;
//     }else{
//         if(a.second < b.second) return false;
//         return true;
//     }
// }

// Simple Trick - in which ever order you want things return that no need to remember true or false

bool swap(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return (a.first > b.first);
    }return a.second > b.second;
}


int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].first << a[i].second[i];
    }
    // Normal Behaviour is to sort in ascending order
    // sort(a.begin(), a.end());
    // But we can also define custom behaviour
    sort(a.begin(), a.end(), swap);


    for(int i=0; i < n; i++){
        cout << a[i].first << " " << a[i].second;
    }
    cout << endl;
}