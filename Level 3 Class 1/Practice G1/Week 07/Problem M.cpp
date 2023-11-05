#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, MOD = 1e9 + 7;

int k, dp[N], pref[N];

int solve(int i) {
    if (i == 0)
        return 1;
    int &ans = dp[i];
    if (~ans) return ans;
    ans = solve(i - 1);
    if (k <= i)
        ans = (ans + solve(i - k)) % MOD;
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n >> k;
    for (int i = 1; i < N; ++i)
        pref[i] = (pref[i - 1] + solve(i)) % MOD;
    for (int l, r, i = 0; i < n; ++i) {
        cin >> l >> r;
        cout << ((pref[r] - pref[l - 1]) % MOD + MOD) % MOD << '\n';
    }
    return 0;
}