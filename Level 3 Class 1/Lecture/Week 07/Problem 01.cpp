// A - Frog 1
// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int dp[N], h[N];

int solve(int n) {
    if (n == 1)
        return 0;
    int &ans = dp[n];
    if (~ans) return ans;
    int ans_1 = abs(h[n] - h[n - 1]) + solve(n - 1);
    int ans_2 = 1e9 + 5;
    if (n > 2)
        ans_2 = abs(h[n] - h[n - 2]) + solve(n - 2);
    return ans = min(ans_1, ans_2);
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n; cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> h[i];
    cout << solve(n) << '\n';
    return 0;
}