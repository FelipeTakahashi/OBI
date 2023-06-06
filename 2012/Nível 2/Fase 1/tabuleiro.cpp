#include <iostream>

using namespace std;

int main() {
    int n;
        cin >> n;

    
    int x = 4, y = 3, m[n], ans;

        for (int i = 0;  i < n; i++) {
            cin >> m[i];
        }
        for (int i = 0; i < n; ++i) {
            if (m[i] == 1) {
                x += 1;
                y += 2;
            }
            else if (m[i] == 2) {
                x += 2;
                y += 1;
            }
            else if (m[i] == 3) {
                x += 2;
                y -= 1;
            }
            else if (m[i] == 4) {
                x += 1;
                y -= 2;
            }
            else if (m[i] == 5) {
                x -= 1;
                y -= 2;
            }
            else if (m[i] == 6) {
                x -= 2;
                y -= 1;
            }
            else if (m[i] == 7) {
                x -= 2;
                y += 1;
            }
            else if (m[i] == 8) {
                x -= 1;
                y += 2;
            }

            ans = i + 1;

            if ((x == 1 && y  == 3) or (x == 2 && y  == 3) or  (x == 2 && y  == 5) or (x == 5 && y  == 4)) break;
        }
        cout << ans << endl;
}