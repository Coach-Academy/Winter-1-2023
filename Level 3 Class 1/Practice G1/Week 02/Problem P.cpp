#include <bits/stdc++.h>

using namespace std;

const int N = 102;
int n, m, dist[N][N][2];
char grid[N][N];

int D[4][2] {
    {-1,  0},
    { 0, -1},
    { 0, +1},
    {+1,  0}
};

bool valid(int r, int c) {
    return 0 <= r and r < n and 0 <= c and c < m;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (true) {
        cin >> n >> m;
        if (n == -1 and m == -1)
            break;
        int s_r, s_c;
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
            for (int j = 0; j < m; ++j) {
                dist[i][j][0] = dist[i][j][1] = 1e9;
                if (grid[i][j] == 'H')
                    s_r = i, s_c = j;
            }
        }
        //              row, col   state (0: close, 1: open)
        queue<pair<pair<int, int>, int>> q;
        q.push({{s_r, s_c}, 0});
        dist[s_r][s_c][0] = 0;
        bool escaped = false;
        while (not q.empty()) {
            auto [p, state] = q.front();
            auto [r, c] = p;
            q.pop();
            for (int k = 0; k < 4; ++k) {
                int n_r = r + D[k][0], n_c = c + D[k][1];
                if (not valid(n_r, n_c)) {
                    cout << dist[r][c][state] + 1 << '\n';
                    escaped = true; break;
                }
                if (grid[n_r][n_c] == 'W' or (state == 0 and grid[n_r][n_c] == 'D'))
                    continue;
                int n_state;
                if (grid[n_r][n_c] == 'O')
                    n_state = 1;
                else if (grid[n_r][n_c] == 'C')
                    n_state = 0;
                else
                    n_state = state;
                if (dist[r][c][state] + 1 < dist[n_r][n_c][n_state]) {
                    dist[n_r][n_c][n_state] = dist[r][c][state] + 1;
                    q.push({{n_r, n_c}, n_state});
                }
            }
            if (escaped) break;
        }
        if (not escaped) cout << "-1\n";
    }
    return 0;
}