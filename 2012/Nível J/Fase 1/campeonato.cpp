#include <iostream>

using namespace std;

int main() {
    int cv, ce, cs, fv, fe, fs;
        cin >> cv >> ce >> cs >> fv >> fe >> fs;

    int c = (cv*3) + ce;
    int f = (fv*3) + fe;

    if (c > f) cout << 'C';
    else if (f > c) cout << 'F';
    
    else {
        if (cs > fs) cout << 'C';
        else if (fs > cs) cout << 'F';
        else cout << '=';
    }
}