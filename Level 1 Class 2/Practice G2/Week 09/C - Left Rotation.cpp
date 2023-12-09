#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, d;
    cin >> n >> d;
    queue<int> q;
    while (n--) {
        int s;
        cin >> s;
        q.push(s);
    }
    while (d--) {
        q.push(q.front());
        q.pop();
    }
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }

}
