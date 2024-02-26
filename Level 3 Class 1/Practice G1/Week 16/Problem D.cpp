// D - Multiples of 3
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;

int n;

struct Node {
    int rem[3]{};
};

struct {
    Node tree[4 * N]; int lazy[4 * N];
    void build(int l, int r, int x) {
        if (l == r) {
            ++tree[x].rem[0];
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1);
        build(m + 1, r, 2 * x + 2);
        tree[x] = operation(tree[2 * x + 1], tree[2 * x + 2]);
    }
    Node operation(Node &t1, Node &t2) {
        Node ret;
        for (int i = 0; i < 3; ++i)
            ret.rem[i] = t1.rem[i] + t2.rem[i];
        return ret;
    }
    void push(int l, int r, int x) {
        Node value;
        for (int i = 0; i < 3; ++i)
            value.rem[i] = tree[x].rem[(i + lazy[x]) % 3];
        tree[x] = value;
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
        tree[x] = operation(tree[2 * x + 1], tree[2 * x + 2]);
    }
    int query(int l, int r, int x, int ql, int qr) {
        push(l, r, x);
        if (qr < l or r < ql)
            return 0;
        if (ql <= l and r <= qr)
            return tree[x].rem[0];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return ans1 + ans2;
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int Q;
    cin >> n >> Q;
    seg.build(0, n - 1, 0);
    for (int type, l, r; Q--; ) {
        cin >> type >> l >> r;
        if (type == 0) {
            seg.update(0, n - 1, 0, l, r, 1);
        } else {
            cout << seg.query(0, n - 1, 0, l, r) << '\n';
        }
    }
    return 0;
}