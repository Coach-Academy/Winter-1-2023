#include <bits/stdc++.h>

using namespace std;


void solve(deque<int> &dq, int x) {
    if (dq.empty())
        return;

    int f = dq.front();
    if (f != x)
        cout << f << ' ';
    dq.pop_front();
    solve(dq, x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    deque<int> dq(n);
    for (auto &s: dq)
        cin >> s;
    solve(dq, x);
    cout << endl;
}
