// OBI 2020 f1pj

#include <iostream>

using namespace std;

void solve(int a, int b, int c) {
    if ((b - a) < (c - b)) cout << 1 << "\n";
    else if ((b - a) > (c - b)) cout << -1 << "\n";
    else cout << 0 << "\n";
    
    return;
}

int main() {
    int a, b, c;
        cin >> a >> b >> c;
        
    solve(a, b, c);
    
    return 0;
}