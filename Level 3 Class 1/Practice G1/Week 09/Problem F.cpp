#include <bits/stdc++.h>
using namespace std;

const int N = 18;
int n, tc = 1, weights[N], deps[N], dp[N][1 << N], visited[N][1 << N];

int solve(int day, int mask) {
    if (day == n)
        return 0;
    int &ans = dp[day][mask];
    if (visited[day][mask] == tc)
        return ans;
    visited[day][mask] = tc;
    ans = 0;
    for (int i = 0; i < n; ++i) {
        if (((mask >> i) & 1) or (mask & deps[i]) != deps[i])
            continue;
        ans = max(ans, (day + 1) * weights[i] + solve(day + 1, mask | (1 << i)));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int TC; cin >> TC;
    for (; tc <= TC; ++tc) {
        int m; cin >> n >> m; cin.ignore();
        vector<pair<string, int>> topic_weight(n);
        for (auto &[s, w] : topic_weight) {
            string line; getline(cin, line);
            int last_space = line.rfind(' ');
            s = line.substr(0, last_space);
            w = stoi(line.substr(last_space + 1));
        }
        sort(topic_weight.begin(), topic_weight.end());
        vector<string> topics(n);
        for (int i = 0; i < n; ++i) {
            auto [topic, weight] = topic_weight[i];
            topics[i] = topic;
            weights[i] = weight;
            deps[i] = 0; // clearing
        }
        while (m--) {
            string line; getline(cin, line);
            int arrow = line.find(" --> ");
            string dependency = line.substr(0, arrow);
            string dependent = line.substr(arrow + 5);
            int u = (int) (lower_bound(topics.begin(), topics.end(), dependent) - topics.begin());
            int v = (int) (lower_bound(topics.begin(), topics.end(), dependency) - topics.begin());
            deps[u] |= (1 << v);
        }
        cout << solve(0, 0) << '\n';
    }
    return 0;
}