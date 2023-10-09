#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int,int> left;
    map<int,int> right;
    int n, counter = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int size; char side;

        cin >> size >> side;

        if(side == 'E') {
            if(right[size] > 0) {
                right[size]--;
                counter++;
            }
            else left[size]++;
        }

        else {
            if(left[size] > 0) {
                left[size]--;
                counter++;
            }
            else right[size]++;
        }
    }

    cout << counter;
}