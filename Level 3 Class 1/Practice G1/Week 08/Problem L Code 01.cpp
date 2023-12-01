// Recursive solution
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
    int n, l; cin >> l;
    for (; l > 0; cin >> l) {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> cut[i];
        cut[n + 1] = l;
        memset(dp, -1, sizeof(dp));
        cout << "The minimum cutting is ";
        cout << solve(0, n + 1) << ".\n";
    }
    return 0;
}