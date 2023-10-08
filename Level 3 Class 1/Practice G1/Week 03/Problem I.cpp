#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int nxt[N], ans[N];
int parent(int x) {
    if (x == nxt[x])
        return x;
    return nxt[x] = parent(nxt[x]);
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    iota(nxt, nxt + N, 0);
    stack<tuple<int, int, int>> sk;
    for (int l, r, c; q--; ) {
        cin >> l >> r >> c;
        sk.emplace(l, r, c);
    }
    while (not sk.empty()) {
        auto [l, r, c] = sk.top(); sk.pop();
        for (int i = parent(l); i <= r; i = parent(i)) {
            ans[i] = c;
            nxt[i] = i + 1;
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << '\n';
    return 0;
}
