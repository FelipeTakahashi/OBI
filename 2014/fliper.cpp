#include <iostream>

using namespace std;

void solve(int p, int r) {
    if(p == 0) cout << "C\n";
    else if(p == 1 && r == 0) cout << "B\n";
    else cout << "A\n";
}

int main() {
    int P, R;
        cin >> P >> R;

    solve(P, R);

    return 0;
}