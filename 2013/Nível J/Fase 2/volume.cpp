#include <iostream>

using namespace std;

int main() {
    int v, t;
        cin >> v >> t;

    int a;
    for (int i  = 0; i < t; i++) {
        cin >> a;
        v += a;
        if (v > 100) v = 100;
        else if (v < 0) v = 0;
    }

    cout << v << endl;
}