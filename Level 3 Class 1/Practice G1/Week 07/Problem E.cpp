#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 3;

string s;
int dp[N][N];

int solve(int i, int j) {
    if (i >= j) return 0;
    int &ans = dp[i][j];
    if (~ans) return ans;
    if (s[i] == s[j])
        return ans = solve(i + 1, j - 1);
    return ans = min(solve(i + 1, j), solve(i, j - 1)) + 1;
}

void build(int i, int j, string &ans) {
    if (i > j) return;
    if (s[i] == s[j]) {
        ans.push_back(s[i]);
        build(i + 1, j - 1, ans);
        if (i < j)
            ans.push_back(s[i]);
        return;
    }
    if (solve(i, j) == 1 + solve(i + 1, j)) {
        ans.push_back(s[i]);
        build(i + 1, j, ans);
        ans.push_back(s[i]);
        return;
    }
    ans.push_back(s[j]);
    build(i, j - 1, ans);
    ans.push_back(s[j]);
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (cin >> s) {
        for (int i = 0; i < (int) s.size(); ++i)
            for (int j = 0; j < (int) s.size(); ++j)
                dp[i][j] = -1;
        cout << solve(0, (int) s.size() - 1) << ' ';
        string ans;
        build(0, (int) s.size() - 1, ans);
        cout << ans << '\n';
    }
    return 0;
}