#include <iostream>

using namespace std;

int main() {
    int n, s, x, menor;
        cin >> n >> s;
        menor = s;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s += x;

        if (menor > s) menor = s;
    }
    
    cout << menor << endl;
}