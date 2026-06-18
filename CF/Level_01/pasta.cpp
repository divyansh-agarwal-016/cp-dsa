// Problem Link -> https://atcoder.jp/contests/abc241/tasks/abc241_b
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < M; i++){
        cin >> B[i];
    }

    map<int, int> freq;

    for (int x : A){
        freq[x]++;
    }

    for (int x : B){
        if (freq[x] == 0){
            cout << "No" << endl;
            return 0;
        }
        freq[x]--;
    }
    cout << "Yes" << endl;

    return 0;
}