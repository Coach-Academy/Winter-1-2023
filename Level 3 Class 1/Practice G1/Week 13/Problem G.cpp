// G - CGCDSSQ
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5, P = 18;

int n, LOG[N], a[N];

void prepare() {
    for (int i = 2; i < N; ++i)
        LOG[i] = LOG[i / 2] + 1;
}

struct {
    int st[P][N];
    int operation(int l1, int l2) {
        return __gcd(l1, l2);
    }
    void operator()() {
        for (int i = 0; i < n; ++i)
            st[0][i] = a[i];
        for (int p = 1; (1 << p) <= n; ++p)
            for (int i = 0; i + (1 << p) <= n; ++i)
                st[p][i] = operation(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
    }
    int operator()(int l, int r) {
        int p = LOG[r - l + 1];
        return operation(st[p][l], st[p][r - (1 << p) + 1]);
    }
} st;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    prepare();
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    st();
    int q; cin >> q;
    vector<int> queries(q);
    map<int, ll> mp;
    for (int &x : queries) {
        cin >> x; mp[x];
    }
    for (int i = 0; i < n; ++i) {
        int s = i, g = a[i];
        while (s < n) {
            int l = s, r = n - 1;
            while (l <= r) {
                int m = (l + r) / 2;
                if (st(i, m) < g)
                    r = m - 1;
                else
                    l = m + 1;
            }
            auto iter = mp.find(g);
            if (iter != mp.end())
                iter->second += l - s;
            s = l;
            g = st(i, s);
        }
    }
    for (int x : queries)
        cout << mp.at(x) << '\n';
    return 0;
}