// H - Grid 1
// https://atcoder.jp/contests/dp/tasks/dp_h
// Chaning direction of build of the DP.
#include <bits/stdc++.h>
using namespace std;

const int N = 1002, MOD = 1e9 + 7;

int add(int a, int b) {
    return (a + b) % MOD;
}

int dp[N][N];
char grid[N][N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> grid[i];
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#')
                continue;
            if (i) dp[i][j] += dp[i - 1][j];
            if (j) dp[i][j] += dp[i][j - 1];
            dp[i][j] %= MOD;
        }
    }
    cout << dp[n - 1][m - 1] << '\n';
    return 0;
}