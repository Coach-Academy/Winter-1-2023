// D - Knapsack 1
// https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 102;

int n, w[N], v[N];
ll dp[N][100001];

ll solve(int i, int r) {
    if (i == n)
        return 0;
    ll &ans = dp[i][r];
    if (~ans) return ans;
    ans = solve(i + 1, r);
    if (w[i] <= r)
        ans = max(ans, v[i] + solve(i + 1, r - w[i]));
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int W; cin >> n >> W;
    for (int i = 0; i < n; ++i)
        cin >> w[i] >> v[i];
    cout << solve(0, W) << '\n';
    return 0;
}