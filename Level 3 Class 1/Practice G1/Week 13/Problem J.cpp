// J - Integers Have Friends
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5, P = 18;

int n, LOG[N];
ll a[N];

void prepare() {
    for (int i = 2; i < N; ++i)
        LOG[i] = LOG[i / 2] + 1;
}

struct {
    ll st[P][N];
    ll operation(ll l1, ll l2) {
        return __gcd(l1, l2);
    }
    void operator()() {
        for (int i = 0; i < n; ++i)
            st[0][i] = a[i];
        for (int p = 1; (1 << p) <= n; ++p)
            for (int i = 0; i + (1 << p) <= n; ++i)
                st[p][i] = operation(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
    }
    ll operator()(int l, int r) {
        int p = LOG[r - l + 1];
        return operation(st[p][l], st[p][r - (1 << p) + 1]);
    }
} st;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    prepare();
    int tc; cin >> tc;
    while (tc--) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 1; i < n; ++i)
            a[i - 1] = abs(a[i] - a[i - 1]);
        --n;
        st();
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            int l = i, r = n - 1;
            while (l <= r) {
                int m = (l + r) / 2;
                if (st(i, m) > 1)
                    l = m + 1;
                else
                    r = m - 1;
            }
            ans = max(ans, l - i + 1);
        }
        cout << ans << '\n';
    }
    return 0;
}