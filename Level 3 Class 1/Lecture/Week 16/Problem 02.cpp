// C - Light Switching
// https://vjudge.net/problem/SPOJ-LITE
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
struct {
    int seg[4 * N];
    bool lzy[4 * N];
    void push(int l, int r, int x) {
        if (not lzy[x])
            return;
        seg[x] = (r - l + 1) - seg[x];
        if (l < r) {
            lzy[2 * x + 1] ^= lzy[x];
            lzy[2 * x + 2] ^= lzy[x];
        }
        lzy[x] = 0;
    }
    void update(int l, int r, int x, int ql, int qr) {
        push(l, r, x);
        if (qr < l or r < ql)
            return;
        if (ql <= l and r <= qr) {
            lzy[x] = not lzy[x];
            push(l, r, x);
            return;
        }
        int m = (l + r) / 2;
        update(l, m, 2 * x + 1, ql, qr);
        update(m + 1, r, 2 * x + 2, ql, qr);
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    int query(int l, int r, int x, int ql, int qr) {
        push(l, r, x);
        if (qr < l or r < ql)
            return 0;
        if (ql <= l and r <= qr)
            return seg[x];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return ans1 + ans2;
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        --l, --r;
        if (type == 0) {
            seg.update(0, n - 1, 0, l, r);
        } else {
            cout << seg.query(0, n - 1, 0, l, r) << '\n';
        }
    }
    return 0;
}