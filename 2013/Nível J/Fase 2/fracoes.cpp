#include <bits/stdc++.h>

using namespace std;

int den(int b, int d) {
    if (b == d) return b;
    return b * d;
}

int num(int a, int b, int c, int d) {
    int p = den(b, d);
    int ans = (a*(p/b)) + (c*(p/d)); 
    return ans;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    if (b > a) swap(a, b);

    while (b != 0) {
        int r = a % b;

        a = b;
        b = r;
    }
    //return gcd(b, a % b);
    return a;
}

void lowest(int a, int b) {
    int old_a = a, old_b = b;
    int g = gcd(a, b);

    a /= g;
    b /= g;

    if (a == 0 && b == 1) {
        cout << old_a << " " << old_b << "\n";
        return;
    }

    cout << a << " " << b << "\n";
}

int main() {
    int a, b, c, d;
        cin >> a >> b >> c >> d;

    a = num(a, b, c, d);
    b = den(b, d);

    lowest(a, b);
}