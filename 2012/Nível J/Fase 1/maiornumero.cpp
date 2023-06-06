#include <iostream>

using namespace std;

int main() {
    int n = 1, maior = 0; // n = 1 para inicializar & maior = 0 para restrição 1 <= n <= 1000 

    while (n != 0) {
        cin >> n;
        
        if (n > maior) maior = n;
    }

    cout << maior << endl;
}