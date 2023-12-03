#include <bits/stdc++.h>
using namespace std;

struct P {
    int x, y;
    double abs() {
        return hypot(x * 1.0, y * 1.0);
    }
};

P operator-(const P &p1, const P &p2) {
    return {p1.x - p2.x, p1.y - p2.y};
}

const int N = 8;
double dp[N][1 << N];
int n, tc = 1, visited[N][1 << N];
P ps[N];

double solve(int cur, int mask) {
    if (mask + 1 == (1 << n))
        return 0;
    double &ans = dp[cur][mask];
    if (visited[cur][mask] == tc)
        return ans;
    visited[cur][mask] = tc;
    ans = 1e9;
    for (int i = 0; i < n; ++i) {
        if ((mask >> i) & 1)
            continue;
        double dist = 16.0 + (ps[i] - ps[cur]).abs();
        ans = min(ans, dist + solve(i, mask | (1 << i)));
    }
    return ans;
}

void build(int cur, int mask) {
    if (mask + 1 == (1 << n))
        return;
    double cur_ans = solve(cur, mask);
    for (int i = 0; i < n; ++i) {
        if ((mask >> i) & 1)
            continue;
        double dist = 16.0 + (ps[i] - ps[cur]).abs();
        double tmp_ans = dist + solve(i, mask | (1 << i));
        if (cur_ans != tmp_ans)
            continue;
        cout << "Cable requirement to connect (" << ps[cur].x << ',' << ps[cur].y << ") to (" << ps[i].x << ',' << ps[i].y << ") is " << dist << " feet.\n";
        return build(i, mask | (1 << i));
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cout << fixed << setprecision(2);
    for (cin >> n; n > 0; cin >> n, ++tc) {
        for (int i = 0; i < n; ++i)
            cin >> ps[i].x >> ps[i].y;
        double ans = 1e9;
        int ans_i = 0;
        for (int i = 0; i < n; ++i) {
            double tmp = solve(i, 1 << i);
            if (tmp < ans) {
                ans = tmp;
                ans_i = i;
            }
        }
        cout << "**********************************************************\n";
        cout << "Network #" << tc << '\n';
        build(ans_i, (1 << ans_i));
        cout << "Number of feet of cable required is " << ans << ".\n";
    }
    return 0;
}