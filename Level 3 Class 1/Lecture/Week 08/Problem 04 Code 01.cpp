// D - Knapsack 1
// https://atcoder.jp/contests/dp/tasks/dp_d
// Recursive DP Solution
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 102, W = 1e5 + 5;

int n, w[N], v[N];
ll dp[N][W];

ll solve(int i, int r) {
    if (i == n)
        return 0;
    // Memoization
    ll &ans = dp[i][r];
    if (~ans) return ans;
    // leave
    ans = solve(i + 1, r);
    // take
    if (w[i] <= r)
        ans = max(ans, v[i] + solve(i + 1, r - w[i]));
    return ans;
}

int main() {
    int m_w; cin >> n >> m_w;
    for (int i = 0; i < n; ++i)
        cin >> w[i] >> v[i];
    memset(dp, -1, sizeof(dp));
    cout << solve(0, m_w) << '\n';
    return 0;
}