#include <iostream>

using namespace std;

int main() { 
    int n;
        cin >> n;

    int v[n]; 
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }   

    int count = 0, max = 0;
    for(int i = 0; i < n; ++i) {

        if (v[i] == v[i+1]) {
            count++;
        }
        
        else {
            if (count > max) {
                max = count;
            }
            count = 0;
        }
    }

    cout << max + 1 << endl;
}