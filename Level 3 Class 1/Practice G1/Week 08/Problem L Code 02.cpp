// Iterative solution
#include <bits/stdc++.h>
using namespace std;

const int N = 52;

int dp[N][N], cut[N];

int solve(int l, int r) {
    if (r - l < 2)
        return 0;
    int &ans = dp[l][r];
    if (~ans) return ans;
    ans = 1e9 + 15;
    for (int i = l + 1; i < r; ++i) {
        int lf = solve(l, i);
        int rt = solve(i, r);
        ans = min(ans, lf + cut[r] - cut[l] + rt);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, length; cin >> length;
    for (; length > 0; cin >> length) {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> cut[i];
        cut[n + 1] = length;
        for (int i = 0; i < n + 2; ++i) {
            for (int j = 0; j < n + 2; ++j)
                dp[i][j] = 1e9 + 15;
            dp[i][i] = dp[i][i + 1] = 0;
        }
        for (int l = n - 1; l >= 0; --l) {
            for (int r = l + 2; r < n + 2; ++r) {
                int &ans = dp[l][r];
                for (int i = l + 1; i < r; ++i) {
                    ans = min(ans, dp[l][i] + cut[r] - cut[l] + dp[i][r]);
                }
            }
        }
        cout << "The minimum cutting is ";
        cout << dp[0][n + 1];
        cout << ".\n";
    }
    return 0;
}