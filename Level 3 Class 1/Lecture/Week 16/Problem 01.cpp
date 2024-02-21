// A - Horrible Queries
// https://vjudge.net/problem/SPOJ-HORRIBLE
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
struct {
    ll seg[4 * N], lzy[4 * N];
    void clear(int n) {
        for (int i = 0; i < 4 * n; ++i)
            seg[i] = lzy[i] = 0;
    }
    void push(int l, int r, int x) {
        seg[x] += (r - l + 1) * lzy[x];
        if (l < r) {
            lzy[2 * x + 1] += lzy[x];
            lzy[2 * x + 2] += lzy[x];
        }
        lzy[x] = 0;
    }
    void update(int l, int r, int x, int ql, int qr, int v) {
        push(l, r, x);
        if (qr < l or r < ql)
            return;
        if (ql <= l and r <= qr) {
            lzy[x] += v;
            push(l, r, x);
            return;
        }
        int m = (l + r) / 2;
        update(l, m, 2 * x + 1, ql, qr, v);
        update(m + 1, r, 2 * x + 2, ql, qr, v);
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    ll query(int l, int r, int x, int ql, int qr) {
        push(l, r, x);
        if (qr < l or r < ql)
            return 0;
        if (ql <= l and r <= qr)
            return seg[x];
        int m = (l + r) / 2;
        ll ans1 = query(l, m, 2 * x + 1, ql, qr);
        ll ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return ans1 + ans2;
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n, c;
        cin >> n >> c;
        while (c--) {
            int type;
            cin >> type;
            if (type == 0) {
                int l, r, v;
                cin >> l >> r >> v;
                seg.update(0, n - 1, 0, l - 1, r - 1, v);
            } else {
                int l, r;
                cin >> l >> r;
                cout << seg.query(0, n - 1, 0, l - 1, r - 1) << '\n';
            }
        }
        seg.clear(n);
    }
    return 0;
}