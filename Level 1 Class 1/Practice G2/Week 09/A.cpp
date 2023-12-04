#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    queue<int> q;
    int t;
    cin >> t;
    while (t--) {
        int op, n;
        cin >> op;
        if (op == 1) {
            cin >> n;
            q.push(n);
        } else if (op == 2) {
            if (!q.empty()) {
                q.pop();
            }
        } else {
            if (q.empty())
                cout << "Empty!";
            else
                cout << q.front();
            cout<<"\n";
        }

    }

    return 0;
}