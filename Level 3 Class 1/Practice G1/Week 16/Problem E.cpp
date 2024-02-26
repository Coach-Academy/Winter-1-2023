// E - Counting Primes
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5, A = 1e6 + 1;

bool prime[A];

void Sieve() {
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i < A; ++i) {
        if (not prime[i])
            continue;
        for (int j = 2 * i; j < A; j += i)
            prime[j] = false;
    }
}

int n;
bool a[N];

struct {
    int tree[4 * N], lazy[4 * N];
    void build(int l, int r, int x) {
        lazy[x] = -1;
        if (l == r) {
            tree[x] = a[l];
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1);
        build(m + 1, r, 2 * x + 2);
        tree[x] = operation(tree[2 * x + 1], tree[2 * x + 2]);
    }
    int operation(int t1, int t2) {
        return t1 + t2;
    }
    void push(int l, int r, int x) {
        if (lazy[x] == -1)
            return;
        tree[x] = (r - l + 1) * lazy[x];
        if (l < r) {
            lazy[2 * x + 1] = lazy[x];
            lazy[2 * x + 2] = lazy[x];
        }
        lazy[x] = -1;
    }
    void update(int l, int r, int x, int ql, int qr, bool qv) {
        push(l, r, x);
        if (qr < l or r < ql)
            return;
        if (ql <= l and r <= qr) {
            lazy[x] = qv;
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
            return tree[x];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return ans1 + ans2;
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    Sieve();
    int TC; cin >> TC;
    for (int tc = 1; tc <= TC; ++tc) {
        int Q; cin >> n >> Q;
        for (int x, i = 0; i < n; ++i) {
            cin >> x;
            a[i] = prime[x];
        }
        seg.build(0, n - 1, 0);
        cout << "Case " << tc << ":\n";
        for (int type, l, r; Q--; ) {
            cin >> type >> l >> r;
            --l, --r;
            if (type == 0) {
                int v; cin >> v;
                seg.update(0, n - 1, 0, l, r, prime[v]);
            } else {
                cout << seg.query(0, n - 1, 0, l, r) << '\n';
            }
        }
    }
    return 0;
}