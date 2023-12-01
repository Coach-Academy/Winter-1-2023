// Recursive solution
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 12;

int dim[N][2], tc = 1, visited[N][N];

ll dp[N][N];

ll solve(int l, int r) {
    if (l == r) return 0;
    ll &ans = dp[l][r];
    if (visited[l][r] == tc)
        return ans;
    visited[l][r] = tc;
    ans = 1e18 + 15;
    for (int i = l; i < r; ++i) {
        ll lf = solve(l, i);
        ll rt = solve(i + 1, r);
        int lf_r = dim[l][0];
        int lf_c = dim[i][1];
        int rt_c = dim[r][1];
        ans = min(ans, lf + rt + 1ll * lf_r * lf_c * rt_c);
    }
    return ans;
}

void build(int l, int r, string &ans) {
    if (l == r) {
        ans += "A" + to_string(l + 1);
        return;
    }
    ll cur_ans = solve(l, r);
    for (int i = l; i < r; ++i) {
        ll lf = solve(l, i);
        ll rt = solve(i + 1, r);
        int lf_r = dim[l][0];
        int lf_c = dim[i][1];
        int rt_c = dim[r][1];
        ll state_ans = lf + rt + 1ll * lf_r * lf_c * rt_c;
        if (cur_ans == state_ans) {
            ans += '(';
            build(l, i, ans);
            ans += " x ";
            build(i + 1, r, ans);
            ans += ')';
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n; cin >> n;
    for (; n > 0; cin >> n, ++tc) {
        for (int i = 0; i < n; ++i)
            cin >> dim[i][0] >> dim[i][1];
        string ans;
        build(0, n - 1, ans);
        cout << "Case " << tc << ": " << ans << '\n';
    }
    return 0;
}