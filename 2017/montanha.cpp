#include <iostream>

using namespace std;

int main() {
    int n, counter = 0;
        cin >> n;

    int v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 1; i < n-1; i++) {
        if(v[i-1] > v[i] && v[i] < v[i+1]) counter++; 
    }
    
    if(counter) cout << "S";
    else cout << "N";

    return 0;
}