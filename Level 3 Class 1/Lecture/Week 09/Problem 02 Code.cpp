// Playlist for Polycarp (easy version)
// https://vjudge.net/problem/CodeForces-1185G1
// Recursive Solution
#include <bits/stdc++.h>
using namespace std;

const int N = 15, G = 3, MOD = 1e9 + 7;

int n, T, dp[G + 1][1 << N], t[N], gen[N];

int solve(int g, int cur_t, int mask) {
    if (cur_t == T) return 1;
    int &ans = dp[g][mask];
    if (~ans) return ans;
    ans = 0;
    for (int bit = 0; bit < n; ++bit) {
        if (((mask >> bit) & 1) or gen[bit] == g or T < cur_t + t[bit])
            continue;
        ans += solve(gen[bit], cur_t + t[bit], mask | (1 << bit));
        ans %= MOD;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    cin >> n >> T;
    for (int i = 0; i < n; ++i)
        cin >> t[i] >> gen[i];
    cout << solve(0, 0, 0) << '\n';
    return 0;
}