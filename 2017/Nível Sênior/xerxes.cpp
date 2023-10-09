#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n, d, x;
	int opt[7] = {0, 1, 2, 3, 4, 0, 1};

	cin >> n;
	
	int dCounter = 0, xCounter = 0;
	for (int i = 0; i < n; ++i) {
		cin >> d >> x;
		if (x == opt[d+1] || x == opt[d+2]) dCounter++;
		else xCounter++;
	}
	
	if (dCounter > xCounter) cout << "dario\n";
	else cout << "xerxes\n";
	
	return 0;
}