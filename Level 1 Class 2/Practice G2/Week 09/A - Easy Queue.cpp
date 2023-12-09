#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    queue<int> q;
    while (n--) {
        int op;
        cin >> op;
        if (op == 1) {
            int s;
            cin >> s;
            q.push(s);
        } else if (op == 2) {
            if (q.size())
                q.pop();
        } else {
            if (q.size())
                cout << q.front() << '\n';
            else cout << "Empty!\n";
        }
    }

}
