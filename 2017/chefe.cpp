//'T' are just swaps between two people 
//'P' can be answered by running a DFS and comparing ages

#include <bits/stdc++.h>
#define MAX 501

using namespace std;

int N, M, I;
char request;
vector<int> people[MAX];
int age[MAX];
int boss, subordinate, a, b, ans, minimumAge;


int getMinimumAgeDFS(int position) { // 'P'
    int maximumAge = 1e2+1; 
    return ans;
}

int main() {
    cin >> N >> M >> I;

    for(int i = 0; i < N; i++) {
        cin >> age[i];
    }

    for(int i = 0; i < M; i++) {
        cin >> boss >> subordinate;
    }

    for(int i = 0; i < I; i++) {
        cin >> request;

        if(request == 'T') {
            cin >> a >> b;
            swap()
        }

        else if (request == 'P') {
            cin >> a;
            ans = getMinimumAgeDFS();
            if (ans > 1e2+1) cout << '*\n';
            else cout << ans << "\n"; 
        }
    }
}