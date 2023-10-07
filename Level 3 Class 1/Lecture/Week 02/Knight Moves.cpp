// https://vjudge.net/problem/UVA-439
#include <bits/stdc++.h>
using namespace std;

const int N = 10;

bool visited[N][N];
int dist[N][N];
int d[8][2]{
    {-1, +2},
    {-1, -2},
    {+1, -2},
    {+1, +2},
    {-2, -1},
    {-2, +1},
    {+2, -1},
    {+2, +1}
};

void bfs(int src_r, int src_c) {
    queue<pair<int, int>> q;
    q.emplace(src_r, src_c);
    dist[src_r][src_c] = 0;
    visited[src_r][src_c] = true;
    while (not q.empty()) {
        int r, c;
        tie(r, c) = q.front();
        q.pop();
        for (int k = 0; k < 8; ++k) {
            int n_r = r + d[k][0], n_c = c + d[k][1];
            if (n_r < 1 or 8 < n_r or n_c < 1 or 8 < n_c)
                continue;
            if (visited[n_r][n_c])
                continue;
            visited[n_r][n_c] = true;
            dist[n_r][n_c] = dist[r][c] + 1;
            q.emplace(n_r, n_c);
        }
    }
    memset(visited, 0, sizeof(visited));
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    char p1, p2;
    int q1, q2;
    while (cin >> p1 >> q1 >> p2 >> q2) {
        bfs(p1 - 'a' + 1, q1);
        cout << "To get from " << p1 << q1 << " to " << p2 << q2 << " takes " << dist[p2 - 'a' + 1][q2] << " knight moves.\n";
    }
    return 0;
}