/*
 * Problem: B - Distinct Characters Queries
 * Solution using Segment Tree with int that represents a bitmask such
 * that the i-th bit corresponds to the existence of the i-th letter.
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

string s;

struct {
    int seg[4 * N];
    void build(int l, int r, int x) {
        if (l == r) {
            seg[x] = (1 << (s[l] - 'a'));
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1);
        build(m + 1, r, 2 * x + 2);
        seg[x] = (seg[2 * x + 1] | seg[2 * x + 2]);
    }
    void update(int l, int r, int x, int i, char c) {
        if (l == r) {
            seg[x] ^= (1 << (s[i] - 'a'));
            s[i] = c;
            seg[x] |= (1 << (s[i] - 'a'));
            return;
        }
        int m = (l + r) / 2;
        if (i <= m) {
            update(l, m, 2 * x + 1, i, c);
        } else {
            update(m + 1, r, 2 * x + 2, i, c);
        }
        seg[x] = (seg[2 * x + 1] | seg[2 * x + 2]);
    }
    int query(int l, int r, int x, int ql, int qr) {
        if (qr < l or r < ql)
            return 0;
        if (ql <= l and r <= qr)
            return seg[x];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return (ans1 | ans2);
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> s;
    int n = s.size();
    seg.build(0, n - 1, 0);
    int q; cin >> q;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int pos; char c;
            cin >> pos >> c;
            seg.update(0, n - 1, 0, pos - 1, c);
        } else {
            int l, r;
            cin >> l >> r;
            --l, --r;
            cout << __builtin_popcount(seg.query(0, n - 1, 0, l, r)) << '\n';
        }
    }
    return 0;
}