// Range Minimum Query
// https://vjudge.net/problem/SPOJ-RMQSQ
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5, P = 17;

int n, a[N], st[P][N];

void st_build() {
    for (int i = 0; i < n; ++i)
        st[0][i] = a[i];
    for (int p = 1; (1 << p) <= n; ++p) {
        for (int i = 0; i + (1 << p) <= n; ++i) {
            st[p][i] = min(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
        }
    }
}

int query(int l, int r) {
    int ans = INT_MAX, range = r - l + 1;
    for (int bit = P - 1; bit >= 0; --bit)
        if ((1 << bit) <= range) {
            ans = min(ans, st[bit][l]);
            l += (1 << bit);
            range -= (1 << bit);
        }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    st_build();
    int q; cin >> q;
    for (int l, r; q--; ) {
        cin >> l >> r;
        cout << query(l, r) << '\n';
    }
    return 0;
}