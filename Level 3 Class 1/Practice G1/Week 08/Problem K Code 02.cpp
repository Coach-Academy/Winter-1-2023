// Iterative solution
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 12;

int dim[N][2], tc = 1, split[N][N];

ll dp[N][N];

void build(int l, int r, string &ans) {
    if (l == r) {
        ans += "A" + to_string(l + 1);
        return;
    }
    ans += '(';
    build(l, split[l][r], ans);
    ans += " x ";
    build(split[l][r] + 1, r, ans);
    ans += ')';
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n; cin >> n;
    for (; n > 0; cin >> n, ++tc) {
        for (int i = 0; i < n; ++i)
            cin >> dim[i][0] >> dim[i][1];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j] = 1e18 + 15;
                split[i][j] = -1;
            }
            dp[i][i] = 0;
        }
        // solve(0, n - 1);
        for (int l = n - 1; l >= 0; --l) {
            for (int r = l; r < n; ++r) {
                ll &ans = dp[l][r];
                for (int i = l; i < r; ++i) {
                    ll lf = dp[l][i];
                    ll rt = dp[i + 1][r];
                    int lf_r = dim[l][0];
                    int lf_c = dim[i][1];
                    int rt_c = dim[r][1];
                    ll cur = lf + rt + 1ll * lf_r * lf_c * rt_c;
                    if (cur < ans) {
                        ans = cur;
                        split[l][r] = i;
                    }
                }
            }
        }
        string ans;
        build(0, n - 1, ans);
        cout << "Case " << tc << ": " << ans << '\n';
    }
    return 0;
}