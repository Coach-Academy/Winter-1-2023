// I - Yet Another Monster Killing Problem
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int n, m, a[N], mx_p[N];

void test_case() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mx_p[i + 1] = 0;
    }
    mx_p[n + 1] = 0;
    cin >> m;
    for (int p, s, i = 0; i < m; ++i) {
        cin >> p >> s;
        mx_p[s] = max(mx_p[s], p);
    }
    for (int i = n - 1; i > 0; --i)
        mx_p[i] = max(mx_p[i + 1], mx_p[i]);
    int ans = 1, s = 1, i = 0, mx_prv = 0;
    while (i < n) {
        if (max(mx_prv, a[i]) <= mx_p[s]) {
            mx_prv = max(mx_prv, a[i]);
            ++s; ++i; continue;
        }
        if (s == 1)
            return cout << "-1\n", void();
        s = 1;
        ++ans;
        mx_prv = 0;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        test_case();
    }
    return 0;
}