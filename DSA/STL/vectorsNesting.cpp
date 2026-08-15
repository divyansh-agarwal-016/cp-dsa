#include <bits/stdc++.h>
using namespace std;

// Pair of Vectors
// void printVec(vector<pair<int, int>> &v) {
//     cout << "Size: " << v.size() << endl;

//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i].first << " " << v[i].second;
//     }

//     cout << endl;
// }

// int main() {
//     vector<pair<int, int>> v;

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int x, y;
//         cin >> x >> y;

//         v.push_back({x, y});
//     }

//     printVec(v);

//     return 0;
// }

// Array of Vectors
void printVec(vector<int> &v){
    cout << "size: " << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N; // Number of Vectors

    vector<int> v[N];

    for(int i = 0; i < N; ++i){ // Taking input of each vector
        int n; // Size of each vector
        cin >> n;

        for(int j = 0; j < n; ++j){ // Putting values in v-ith vector
            int x; 
            cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i = 0; i < N; ++i){ // Output each vector
        printVec(v[i]);
    }
}