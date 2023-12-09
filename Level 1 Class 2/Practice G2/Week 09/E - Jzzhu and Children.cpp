#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++) {
        int s;
        cin >> s;
        q.push({s, i});
    }
    while (q.size() > 1) {
        q.front().first -= m;
        if (q.front().first > 0) {
            q.push(q.front());
        }
        q.pop();
    }
    cout << q.front().second << endl;

}
