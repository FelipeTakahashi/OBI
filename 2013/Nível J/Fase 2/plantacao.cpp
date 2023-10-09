#include <iostream> 
//check later
using namespace std;

int main() {
    int n, k;
        cin >> n >> k;

    int arr[k];
        for(int i = 0; i < k; i++) {
            cin >> arr[i];
        }

    int sum = 0;
    char state[n];
        for (int i = 0; i < n;i++) {
            cin >> state[i];
        }

    for(int i = 0; i < k; i++) {
        for(int j = 0; j < n; j++) {
            if (state[j] == 'C' && arr[i] != 0) {
                arr[i] += 1;
                sum += arr[i];
            }

            else if (state[j] == 'E' && arr[i] != 0) {
                arr[i] -= 1;
                sum += arr[i];
            }
        }
    }
    cout << sum << "\n";

    return 0;
}