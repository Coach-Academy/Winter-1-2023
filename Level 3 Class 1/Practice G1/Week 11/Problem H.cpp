#include <bits/stdc++.h>
using namespace std;

vector<int> string_pi(const string &s) {
    vector<int> failure(s.size());
    for (int j, i = 1; i < s.size(); ++i) {
        for (j = failure[i - 1]; j > 0 and s[i] != s[j]; j = failure[j - 1]);
        failure[i] = j + (s[i] == s[j]);
    }
    return failure;
}

const int N = 100;
// The period for substring [l, r]
int period[N][N], dp[N][N];

int solve(int l, int r) {
    if (l == r)
        return 1;
    int &ans = dp[l][r];
    if (~ans)
        return ans;
    ans = 1e9;
    for (int i = l; i < r; ++i)
        ans = min(ans, solve(l, i) + solve(i + 1, r));
    if (period[l][r] < r - l + 1)
        ans = min(ans, solve(l, l + period[l][r] - 1));
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (string s; cin >> s, s != "*"; ) {
        for (int i = 0; i < s.size(); ++i) {
            auto failure = string_pi(s.substr(i));
            for (int l = 1; i + l <= s.size(); ++l) {
                int p = l - failure[l - 1];
                period[i][i + l - 1] = (l % p ? l : p);
            }
        }
        memset(dp, -1, sizeof(dp));
        cout << solve(0, s.size() - 1) << '\n';
    }
    return 0;
}