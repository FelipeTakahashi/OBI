#include <iostream>

using namespace std;

int main() {
    int n;
        cin >> n;

    int M[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(M[i-1][j-1] + M[i][j-1] + M[i-1][j] == 2) M[i][j] = 0;
            else M[i][j] = 1;
        }
    }

    cout << M[n-1][n-1];

    return 0;
}