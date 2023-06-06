#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, id;
        cin >> n;

    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> id;
        s.insert(id); 
    }

    cout << s.size() << endl;
}