// H - Grid 1
// https://atcoder.jp/contests/dp/tasks/dp_h
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
    dp[n - 1][m - 1] = 1;
    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            if ((i == n - 1 and j == m - 1) or grid[i][j] == '#')
                continue;
            dp[i][j] = add(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    cout << dp[0][0] << '\n';
    return 0;
}