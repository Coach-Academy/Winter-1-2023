// Lucky Common Subsequence
// https://vjudge.net/problem/CodeForces-346B
#include <bits/stdc++.h>
using namespace std;

vector<int> string_pi(const string &s) {
    vector<int> failure(s.size());
    for (int j, i = 1; i < (int) s.size(); ++i) {
        for (j = failure[i - 1]; j > 0 and s[j] != s[i]; j = failure[j - 1]);
        failure[i] = j + (s[i] == s[j]);
    }
    return failure;
}
const int N = 102;
int dp[N][N][N];
string s1, s2, virus;
vector<int> failure;
int solve(int i, int j, int k) {
    if (i >= (int) s1.size() or j >= (int) s2.size())
        return 0;
    int &ans = dp[i][j][k];
    if (~ans) return ans;
    ans = max(solve(i + 1, j, k), solve(i, j + 1, k));
    if (s1[i] != s2[j]) return ans;
    for (; k > 0 and s1[i] != virus[k]; k = failure[k - 1]);
    k += (s1[i] == virus[k]);
    if (k < (int) virus.size())
        ans = max(ans, 1 + solve(i + 1, j + 1, k));
    return ans;
}
void build(int i, int j, int k, string &ans) {
    if (i >= (int) s1.size() or j >= (int) s2.size())
        return;
    int current = solve(i, j, k);
    if (current == solve(i + 1, j, k))
        return build(i + 1, j, k, ans);
    if (current == solve(i, j + 1, k))
        return build(i, j + 1, k, ans);
    if (s1[i] != s2[j])
        return;
    for (; k > 0 and s1[i] != virus[k]; k = failure[k - 1]);
    k += (s1[i] == virus[k]);
    if (k < (int) virus.size() and current == 1 + solve(i + 1, j + 1, k)) {
        ans += s1[i];
        build(i + 1, j + 1, k, ans);
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    cin >> s1 >> s2 >> virus;
    failure = string_pi(virus);
    string ans;
    build(0, 0, 0, ans);
    if (ans.empty()) {
        cout << "0\n";
    } else {
        cout << ans << '\n';
    }
    return 0;
}