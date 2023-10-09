#include <iostream>

using namespace std;

int main() {
	int N, D, A;
		cin >> N >> D >> A;
	
	int ans = (D>=A) ? D-A : (D+N)-A;

    cout << ans;

    return 0;
}