#include <iostream>

using namespace std;

int h, l;
bool fit(int a, int b) {
    if ((a <= h && b <= l) || (a <= l && b <= h)) return true;
    return false;
}

int main() {
	int a, b, c;
		cin >> a >> b >> c;
		cin >> h >> l;
	
    bool ans = fit(a, b) || fit(a, c) || fit(b, c);
	
    if (ans) cout << "S\n";
    else cout << "N\n";

	return 0;
}