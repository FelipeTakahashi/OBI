#include <iostream>

using namespace std;

int main() {
    int a, b, c, aux;
        cin >> a >> b >> c;

    // Sem usar swap()
    
    if (a > c) {
        aux = c;
        c = a;
        a = aux;
    }

    if (a > b) {
        aux = b;
        b = a;
        a = aux;
    }

    if (b > c) {
        aux = c;
        c = b;
        b = aux;
    }

    cout << b << endl;

}