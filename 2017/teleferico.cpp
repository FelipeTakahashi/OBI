#include <iostream>

using namespace std;

int main() {
    int C, A;
        cin >> C >> A;
    
    C -= 1;

    if (C > A) cout << 1;
    else if(A % C == 0) cout << A / C;
    else cout << (A/C) + 1;

    return 0;
}