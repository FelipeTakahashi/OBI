#include <iostream>

using namespace std;

int main() {
    int n;
        cin >> n;
    
    int v[n], obj = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        obj += v[i];
    }
 
    obj /= 2;
    
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += v[i];
        if (total == obj) {
            cout << i+1 << endl;
            break;
        }
    }
}