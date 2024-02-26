// B - Circular RMQ
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;

int n, a[N];

struct {
    ll tree[4 * N], lazy[4 * N];
    void build(int l, int r, int x) {
        if (l == r) {
            tree[x] = a[l];
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1);
        build(m + 1, r, 2 * x + 2);
        tree[x] = min(tree[2 * x + 1], tree[2 * x + 2]);
    }
    void push(int l, int r, int x) {
        tree[x] += lazy[x];
        if (l < r) {
            lazy[2 * x + 1] += lazy[x];
            lazy[2 * x + 2] += lazy[x];
        }
        lazy[x] = 0;
    }
    void update(int l, int r, int x, int ql, int qr, int qv) {
        push(l, r, x);
        if (qr < l or r < ql)
            return;
        if (ql <= l and r <= qr) {
            lazy[x] += qv;
            push(l, r, x);
            return;
        }
        int m = (l + r) / 2;
        update(l, m, 2 * x + 1, ql, qr, qv);
        update(m + 1, r, 2 * x + 2, ql, qr, qv);
        tree[x] = min(tree[2 * x + 1], tree[2 * x + 2]);
    }
    ll query(int l, int r, int x, int ql, int qr) {
        push(l, r, x);
        if (qr < l or r < ql)
            return 2e18;
        if (ql <= l and r <= qr)
            return tree[x];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return min(ans1, ans2);
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    seg.build(0, n - 1, 0);
    int Q; cin >> Q;
    cin.ignore();
    for (string line; Q--; ) {
        getline(cin, line);
        stringstream ss(line);
        int l, r, v;
        ss >> l >> r;
        if (ss >> v) {
            if (r < l) {
                seg.update(0, n - 1, 0, l, n - 1, v);
                seg.update(0, n - 1, 0, 0, r, v);
            } else {
                seg.update(0, n - 1, 0, l, r, v);
            }
        } else {
            ll ans = 2e18;
            if (r < l) {
                ans = min(ans, seg.query(0, n - 1, 0, l, n - 1));
                ans = min(ans, seg.query(0, n - 1, 0, 0, r));
            } else {
                ans = min(ans, seg.query(0, n - 1, 0, l, r));
            }
            cout << ans << '\n';
        }
    }
    return 0;
}