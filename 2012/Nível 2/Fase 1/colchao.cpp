#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
        cin >> a >> b >> c;

    int h, l;
        cin >> h >> l;
    
    if (h < l) swap(h, l);

    int m = min({a, b, c});
    int n = a+b+c - m - max({a, b, c});

    if (m <= l && n <= h) cout << "S" << endl;
    else cout << "N" << endl;
}