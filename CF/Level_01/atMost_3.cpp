/** We will create 2 vector arrays one for the input from the question one for addition (to store all the possibilities of weight 1, 2 or 3) then 
    then we will simply count the numbers of added weights that are greater than equal to W and return the count 
    */

    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        int N, W;
        cin >> N >> W;
    
        int A[305];
    
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
    
        bool possible[1000001] = {};
    
        // Choose 1 weight
        for (int i = 0; i < N; i++) {
            int sum = A[i];
    
            if (sum <= W) {
                possible[sum] = true;
            }
        }
    
        // Choose 2 weights
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j];
    
                if (sum <= W) {
                    possible[sum] = true;
                }
            }
        }
    
        // Choose 3 weights
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                for (int k = j + 1; k < N; k++) {
                    int sum = A[i] + A[j] + A[k];
    
                    if (sum <= W) {
                        possible[sum] = true;
                    }
                }
            }
        }
    
        int ans = 0;
    
        for (int i = 1; i <= W; i++) {
            if (possible[i]) {
                ans++;
            }
        }
    
        cout << ans << endl;
    
        return 0;
    }