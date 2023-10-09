#include <iostream>

using namespace std;

int main() {
    int n;
        cin >> n;

    int V[n], dist[n];
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
            if (V[i] == -1) V[i] = 0;
            else V[i] = 1;
        }

    int i = 0, j = 0;
    while (i < n) {
        while (V[j] != 1) {
            j += 1;
            V[i] += 1;
        }

    }

    
}