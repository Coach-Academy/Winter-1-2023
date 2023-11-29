// Collecting Beepers
// https://vjudge.net/problem/UVA-10496
// Recursive Solution
#include <bits/stdc++.h>
using namespace std;

const int N = 11;

int n, x[N], y[N], dp[N][1 << N];

int solve(int i, int mask) {
    if (mask + 1 == (1 << n))
        return abs(x[0] - x[i]) + abs(y[0] - y[i]);
    int &ans = dp[i][mask];
    if (~ans) return ans;
    ans = 1e9 + 15;
    for (int bit = 0; bit < n; ++bit) {
        if ((mask >> bit) & 1)
            continue;
        int dist = abs(x[i] - x[bit]) + abs(y[i] - y[bit]);
        ans = min(ans, dist + solve(bit, mask | (1 << bit)));
    }
    return ans;
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int R, C, p_r, p_c;
        cin >> R >> C >> p_r >> p_c >> n;
        x[0] = p_r;
        y[0] = p_c;
        ++n;
        for (int i = 1; i < n; ++i)
            cin >> x[i] >> y[i];
        memset(dp, -1, sizeof(dp));
        cout << "The shortest path has length ";
        cout << solve(0, 1) << '\n';
    }
    return 0;
}