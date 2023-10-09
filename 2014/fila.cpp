#include <iostream>
#include <set>
#define MAX 50000

using namespace std;

int n, m, id;
int queue[MAX];

int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++) scanf("%d", queue+i);

    cin >> m;
    set<int> search;
    for(int i = 0; i < m; i++) {
        cin >> id;
        search.insert(id);
    }

    for(int i = 0, j = 0; i < n; i++) if(search.find(queue[i]) == search.end()) cout << queue[i] << " "; 

    return 0;
}