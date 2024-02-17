/*
 * Problem: B - Distinct Characters Queries
 * Solution using 26 Segment Trees each is `boolean or`.
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

string s;

struct {
    bool seg[4 * N];
    void build(int l, int r, int x, char c) {
        if (l == r) {
            seg[x] = (s[l] == c);
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1, c);
        build(m + 1, r, 2 * x + 2, c);
        seg[x] = (seg[2 * x + 1] | seg[2 * x + 2]);
    }
    void update(int l, int r, int x, int i, bool v) {
        if (l == r) {
            seg[x] = v;
            return;
        }
        int m = (l + r) / 2;
        if (i <= m) {
            update(l, m, 2 * x + 1, i, v);
        } else {
            update(m + 1, r, 2 * x + 2, i, v);
        }
        seg[x] = (seg[2 * x + 1] | seg[2 * x + 2]);
    }
    bool query(int l, int r, int x, int ql, int qr) {
        if (qr < l or r < ql)
            return false;
        if (ql <= l and r <= qr)
            return seg[x];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return (ans1 | ans2);
    }
} seg[26];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> s;
    int n = s.size();
    for (int i = 0; i < 26; ++i)
        seg[i].build(0, n - 1, 0, i + 'a');
    int q; cin >> q;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int pos; char c;
            cin >> pos >> c;
            --pos;
            seg[s[pos] - 'a'].update(0, n - 1, 0, pos, false);
            s[pos] = c;
            seg[s[pos] - 'a'].update(0, n - 1, 0, pos, true);
        } else {
            int l, r, cnt = 0;
            cin >> l >> r;
            --l, --r;
            for (int i = 0; i < 26; ++i)
                cnt += seg[i].query(0, n - 1, 0, l, r);
            cout << cnt << '\n';
        }
    }
    return 0;
}