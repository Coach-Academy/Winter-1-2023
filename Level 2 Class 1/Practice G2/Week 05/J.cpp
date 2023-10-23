#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
long long pref[N], pref2[N];
int main() {
    int n, m, k; cin >> n >> m >> k;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    vector <array <int, 3>> ops(m);
    for (auto &[l, r, d] : ops) cin >> l >> r >> d, l--, r--;
    while(k--) {
        int x, y; cin >> x >> y; x--, y--;
        pref[x]++, pref[y+1]--;
    }
    for (int i = 1; i < N; i++) pref[i]+=pref[i-1];
    for (int i = 0; i < m; i++) {
        auto &[l, r, d] = ops[i];
        pref2[l]+=pref[i]*d;
        pref2[r+1]-=pref[i]*d;
    }
    for (int i = 1; i < N; i++) pref2[i]+=pref2[i-1];
    for (int i = 0; i < n; i++) {
        cout << a[i]+pref2[i] << ' ';
    }
    cout << '\n';
    return 0;
}
