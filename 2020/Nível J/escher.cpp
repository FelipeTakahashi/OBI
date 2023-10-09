// OBI 2020 f1pj

#include <iostream>

using namespace std;

int main() {
    int n;
        cin >> n;
    
    int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

    int reference = arr[0] + arr[n-1];
    for (int i = 1, j = 2; i < n; i++, j++) {
        int sum = arr[i] + arr[n-j];
        if (sum != reference) {
            cout << "N\n";
            exit(0);
        }
    }

    cout << "S\n";
}