#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 2 xícaras, 3 ovos, 5 colheres
    a /= 2;
    b /= 3;
    c /= 5;

    // Estrutura condicional ignorável se utilizar 'min()'
    int menor;
    if (a <= b and a <= c) menor = a;
    else if (b <= a and b <= c) menor = b;
    else menor = c;

    cout << menor << endl;
}