#include <bits/stdc++.h>
using namespace std;

const int N = 15, H = 101;
int n, tc = 1, visited[H][1 << N], heights[N];
pair<int, int> dp[H][1 << N];

pair<int, int> solve(int cur_h, int mask) {
    if (mask + 1 == (1 << n))
        return {cur_h + 2 * n, 1};
    auto &[cur_len, cur_cnt] = dp[cur_h][mask];
    if (visited[cur_h][mask] == tc)
        return {cur_len, cur_cnt};
    visited[cur_h][mask] = tc;
    cur_len = cur_cnt = 0;
    for (int i = 0; i < n; ++i) {
        if ((mask >> i) & 1)
            continue;
        int length = abs(cur_h - heights[i]);
        auto [tmp_len, tmp_cnt] = solve(heights[i], mask | (1 << i));
        if (cur_len < length + tmp_len) {
            cur_len = length + tmp_len;
            cur_cnt = tmp_cnt;
        } else if (cur_len == length + tmp_len)
            cur_cnt += tmp_cnt;
    }
    return {cur_len, cur_cnt};
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (cin >> n; n > 0; cin >> n, ++tc) {
        for (int i = 0; i < n; ++i)
            cin >> heights[i];
        auto [len, cnt] = solve(0, 0);
        cout << len << ' ' << cnt << '\n';
    }
    return 0;
}