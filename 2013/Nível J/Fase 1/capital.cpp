#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
        cin >> a >> b >> c >> d;

    if (a * b == c * d) cout << 'S' << endl;
    else if (a * c == b * d) cout << 'S' << endl;
    else if (a * d == c * b) cout << 'S' << endl;
    else cout << 'N' << endl;
}