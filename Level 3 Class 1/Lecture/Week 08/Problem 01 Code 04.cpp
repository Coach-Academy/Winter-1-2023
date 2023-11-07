// H - Grid 1
// https://atcoder.jp/contests/dp/tasks/dp_h
// Recursive DP Solution
#include <bits/stdc++.h>
using namespace std;

const int N = 1002, MOD = 1e9 + 7;

int add(int a, int b) {
    return (a + b) % MOD;
}

int n, m, dp[N][N];
char grid[N][N];

int solve(int i, int j) {
    if (i == 0 and j == 0)
        return 1;
    int &ans = dp[i][j];
    if (~ans) return ans;
    ans = 0;
    if (i > 0 and grid[i - 1][j] == '.')
        ans = solve(i - 1, j);
    if (j > 0 and grid[i][j - 1] == '.')
        (ans += solve(i, j - 1)) %= MOD;
    return ans;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> grid[i];
    memset(dp, -1, sizeof(dp));
    cout << solve(n - 1, m - 1) << '\n';
    return 0;
}