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

vector<vector<int>> dp;
vector<int> failure;
string s, t;

int solve(int i, int j) {
    if (i >= s.size())
        return 0;
    int &ans = dp[i][j];
    if (~ans)
        return ans;
    ans = 0;
    if (s[i] == t[j] or s[i] == '?') {
        int k = j + 1;
        if (k < t.size()) {
            ans = max(ans, solve(i + 1, k));
        } else {
            ans = max(ans, 1 + solve(i + 1, failure[k - 1]));
        }
    }
    if (s[i] != t[j] or s[i] == '?') {
        if (j > 0) {
            ans = max(ans, solve(i, failure[j - 1]));
        } else {
            ans = max(ans, solve(i + 1, 0));
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> s >> t;
    failure = string_pi(t);
    dp = vector<vector<int>>(s.size(), vector<int>(t.size(), -1));
    cout << solve(0, 0) << '\n';
    return 0;
}