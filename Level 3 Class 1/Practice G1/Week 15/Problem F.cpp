/*
 * Problem: F - SUM and REPLACE
 * Solution using Segment Tree for updating sums, Sieve for prime factorizing
 * numbers, and set for keeping track of indices of updatable value.
 * The solution relies on the fact that any element reaches value of `1` or `2`
 * no longer changes, and the number of operations required to make an element
 * reach either value is small.
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5 + 5, A = 1e6 + 6;
int prime[A];

void Sieve() {
    for (int i = 2; i < A; ++i) {
        if (prime[i]) continue;
        for (int j = i; j < A; j += i)
            prime[j] = i;
    }
}

int D(int x) {
    int ans = 1;
    for (int p = prime[x]; p > 1; p = prime[x]) {
        int cnt = 0;
        for (; x % p == 0; x /= p, ++cnt);
        ans *= (1 + cnt);
    } 
    return ans;
}

int n, a[N];

struct {
    ll seg[4 * N];
    void build(int l, int r, int x) {
        if (l == r) {
            seg[x] = a[l];
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1);
        build(m + 1, r, 2 * x + 2);
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    void update(int l, int r, int x, int i) {
        if (l == r) {
            seg[x] = a[l] = D(a[l]);
            return;
        }
        int m = (l + r) / 2;
        if (i <= m) {
            update(l, m, 2 * x + 1, i);
        } else {
            update(m + 1, r, 2 * x + 2, i);
        }
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    ll query(int l, int r, int x, int ql, int qr) {
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
    Sieve();
    int m; cin >> n >> m;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 2)
            s.insert(i);
    }
    seg.build(0, n - 1, 0);
    while (m--) {
        int type; cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            vector<int> to_erase;
            auto lf = s.lower_bound(l - 1);
            for (; lf != s.end() and *lf < r; ++lf) {
                seg.update(0, n - 1, 0, *lf);
                if (a[*lf] < 3)
                    to_erase.push_back(*lf);
            }
            for (int i : to_erase)
                s.erase(i);
        } else {
            int l, r;
            cin >> l >> r;
            cout << seg.query(0, n - 1, 0, l - 1, r - 1) << '\n';
        }
    }
    return 0;
}