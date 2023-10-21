#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 502;
int n, dist[N][N];
bool cons[N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dist[i][j];
    stack<int> nodes;
    for (int x, i = 0; i < n; ++i) {
        cin >> x; nodes.push(x - 1);
    }
    stack<ll> ans;
    while (not nodes.empty()) {
        int node = nodes.top(); nodes.pop();
        cons[node] = true;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                dist[i][j] = min(dist[i][j], dist[i][node] + dist[node][j]);
        ll sum = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (cons[i] and cons[j])
                    sum += dist[i][j];
        ans.push(sum);
    }
    for (; not ans.empty(); ans.pop())
        cout << ans.top() << ' ';
    return 0;
}