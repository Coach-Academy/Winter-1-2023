/*
 * Problem: G - Ant colony
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, P = 17;

int LOG[N];

void prepare() {
    for (int i = 2; i < N; ++i)
        LOG[i] = LOG[i / 2] + 1;
}

struct {
    int st[P][N];
    void build(vector<int> &data) {
        for (int i = 0; i < data.size(); ++i)
            st[0][i] = data[i];
        for (int p = 1; (1 << p) <= data.size(); ++p)
            for (int i = 0; i + (1 << p) <= data.size(); ++i)
                st[p][i] = __gcd(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
    }
    int operator()(int l, int r) {
        int p = LOG[r - l + 1];
        return __gcd(st[p][l], st[p][r - (1 << p) + 1]);
    }
} st;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    prepare();
    int n; cin >> n;
    vector<int> a(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    st.build(a);
    int Q; cin >> Q;
    for (int l, r; Q--; ) {
        cin >> l >> r;
        --l, --r;
        int g = st(l, r);
        auto iter = mp.find(g);
        if (iter == mp.end()) {
            cout << r - l + 1 << '\n'; continue;
        }
        int ans = r - l + 1;
        auto &v = iter->second;
        int lf = lower_bound(v.begin(), v.end(), l) - v.begin();
        int rt = upper_bound(v.begin(), v.end(), r) - v.begin();
        ans -= rt - lf;
        cout << ans << '\n';
    }
    return 0;
}