#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);

//     for(int i=0; i < n; i++){
//         cin >> v[i];
//     }

//     int min = *min_element(v.begin(), v.end());
//     int max = *max_element(v.begin(), v.end());
//     int sum = accumulate(v.begin(), v.end(), 0);
//     int ct = count(v.begin(), v.end(), 2);
//     auto it = find(v.begin(), v.end(), 2);

//     if(it != v.end()){
//         cout << *it << endl;
//     }else{
//         cout << "Element Not Found";
//     }

//     // Reverse 
//     reverse(v.begin(), v.end());
//     for(auto val : v){
//         cout << val << " ";
//     }
//     cout << endl;
//     cout << min << endl;
//     cout << max << endl;
//     cout << sum << endl;
//     cout << ct << endl;

//     string s = "Divyansh";
//     reverse(s.begin(), s.end());
//     // reverse(s.begin()+1, s.end());
//     cout << s << endl;

// }


int main(){
    // cout << [](int x){return x+2}(2) << endl; // Lambda Function
    // cout << [](int x, int y){return x+y;}(5,7) << endl;
    // auto sum = [](int x, int y){return x+y;};
    // cout << sum(2,3) << endl;

    vector <int> v = {2,3,-5};
    // all_of - Return value true if the condition is valid otherwise false
    cout << all_of(v.begin(), v.end(), [](int x){return x>0;}) << endl;
    // If all the given condition return false then only this will return otherwise it will return true
    cout << any_of(v.begin(), v.end(), [](int x){return x>0;}) << endl;
    // even if one condition returns true it will return false otherwise it will return true
    cout << none_of(v.begin(), v.end(), [](int x){return x>0;}) << endl;

}