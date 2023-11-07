// D - Knapsack 1
// https://atcoder.jp/contests/dp/tasks/dp_d
// Recursive DP Solution Converted to Iterative DP Solution
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
    for (int cur_w = 1; cur_w <= m_w; ++cur_w) {
        for (int i = n - 1; i >= 0; --i) {
            dp[i][cur_w] = dp[i + 1][cur_w];
            if (w[i] <= cur_w)
                dp[i][cur_w] = max(dp[i][cur_w], v[i] + dp[i + 1][cur_w - w[i]]);
        }
    }
    cout << dp[0][m_w] << '\n';
    return 0;
}