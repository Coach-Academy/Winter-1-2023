#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int query, order = 1;
    cin >> query;
    queue<int> q;
    multimap<int, int, greater<>> mp;
    set<int> done;
    while (query--) {
        int op;
        cin >> op;
        if (op == 1) {
            int m;
            cin >> m;
            q.push(order);
            mp.insert({m, order});
            order++;
        } else if (op == 2) {
            while (done.count(q.front()))
                q.pop();
            cout << q.front() << ' ';
            done.insert(q.front());
            q.pop();
        } else {
            while (done.count(mp.begin()->second))
                mp.erase(mp.begin());
            cout << mp.begin()->second << ' ';
            done.insert(mp.begin()->second);
        }
    }
}
