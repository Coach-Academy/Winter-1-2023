#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, c, a[N], b[N], dp[N][2];

int solve(int i, int e) {
    if (i == 0) return 0;
    int &ans = dp[i][e];
    if (~ans) return ans;
    ans = a[i] + solve(i - 1, false);
    ans = min(ans, (e ? 0 : c) + b[i] + solve(i - 1, true));
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    cin >> n >> c;
    for (int i = 1; i < n; ++i)
        cin >> a[i];
    for (int i = 1; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
        cout << min(solve(i, false), c + solve(i, true)) << ' ';
    return 0;
}