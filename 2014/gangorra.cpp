#include <iostream>

using namespace std;

int P1, C1, P2, C2;

void solve(int a, int b, int c, int d) {
    if (a*b == c*d) cout << "0\n";
    else if(a*b < c*d) cout << "1\n";
    else cout << "-1\n";
}

int main() {
    
    cin >> P1 >> C1 >> P2 >> C2;

    solve(P1, C1, P2, C2);

    return 0;
}