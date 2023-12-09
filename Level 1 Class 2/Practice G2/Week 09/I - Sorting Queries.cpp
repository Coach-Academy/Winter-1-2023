#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    queue<int> q;
    priority_queue<int, vector<int>, greater<>> pq;
    int n;
    cin >> n;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            int s;
            cin >> s;
            q.push(s);
        } else if (type == 2) {
            if (pq.size()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else {
            while (q.size()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }
}
