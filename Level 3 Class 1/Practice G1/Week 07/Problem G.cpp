#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 30004, C = 5, coins[]{ 1, 5, 10, 25, 50 };

ll dp[N][C];

ll solve(int i, int c) {
    if (i == 0)
        return 1;
    ll &ans = dp[i][c];
    if (~ans) return ans;
    ans = 0;
    if (c + 1 < C)
        ans = solve(i, c + 1);
    if (coins[c] <= i)
        ans += solve(i - coins[c], c);
    return ans;
}

int main() {
    memset(dp, -1, sizeof(dp));
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (int n; cin >> n; ) {
        ll ans = solve(n, 0);
        if (ans != 1)
            cout << "There are " << ans << " ways to produce " << n << " cents change.\n";
        else
            cout << "There is only 1 way to produce " << n << " cents change.\n";
    }
    return 0;
}