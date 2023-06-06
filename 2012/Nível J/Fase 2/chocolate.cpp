#include <iostream>

using namespace std;

int main() {
    double l;
        cin >> l;


    int c = 1;
    while (l >= 2) {
        l /= 2;
        c *= 4;
    }

    cout << c << endl;
}