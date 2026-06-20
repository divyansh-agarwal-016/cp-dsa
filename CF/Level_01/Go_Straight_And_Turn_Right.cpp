// Problem Statement => https://atcoder.jp/contests/abc244/tasks/abc244_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string T;
    cin >> N >> T;

    int x = 0, y = 0;
    int dir = 1;

    for (char c : T) {
        if (c == 'R') {
            if (dir == 4)
                dir = 1;
            else
                dir++;
        }
        else {
            if (dir == 1)
                x++;
            else if (dir == 2)
                y--;
            else if (dir == 3)
                x--;
            else if (dir == 4)
                y++;
        }
    }

    cout << x << " " << y << endl;
}
/** Thought Process we will set (x,y) = 0,0 and then run a loop if we encounter 's' we will move in the right direction of x then if we encounter 'r'
    we will have to do something (treating it as a black box for now) so that it shifts 90 degrees then if again enounter 's' we will start walking now
    the final co-ordinates will (1, -1)
*/
    