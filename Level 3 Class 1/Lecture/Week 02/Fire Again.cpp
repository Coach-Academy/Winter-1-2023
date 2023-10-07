// https://vjudge.net/problem/CodeForces-35C
#include <bits/stdc++.h>
using namespace std;

const int N = 2e3;

bool visited[N][N];
int d[4][2]{
    {-1,  0},
    { 0, -1},
    { 0, +1},
    {+1,  0}
};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int K; cin >> K;
    queue<pair<int, int>> q;
    for (int x, y, i = 0; i < K; ++i) {
        cin >> x >> y;
        q.emplace(x, y);
        visited[x][y] = true;
    }
    int x, y;
    while (not q.empty()) {
        tie(x, y) = q.front();
        q.pop();
        for (int k = 0; k < 4; ++k) {
            int n_x = x + d[k][0], n_y = y + d[k][1];
            if (n_x < 1 or n < n_x or n_y < 1 or m < n_y)
                continue;
            if (visited[n_x][n_y])
                continue;
            q.emplace(n_x, n_y);
            visited[n_x][n_y] = true;
        }
    }
    cout << x << ' ' << y << '\n';
    return 0;
}