#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c, d, e;
        std::cin >> a >> b >> c >> d >> e;

    double ans = a + b + c + d + e - min({a, b, c, d, e}) - max({a, b, c, d, e});

    cout << ans << endl;
}