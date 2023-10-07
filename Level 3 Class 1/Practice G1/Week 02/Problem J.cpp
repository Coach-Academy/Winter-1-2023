#include <bits/stdc++.h>
using namespace std;

const int N = 502;

int n, m;
char grid[N][N];

bool valid(int r, int c) {
    return 0 <= r and r < n and 0 <= c and c < m;
}

int d[4][2] {
    {-1, 0},
    {0, -1},
    {0, 1},
    {1, 0}
};

int main() {
    int k;
    cin >> n >> m >> k;
    int cnt = -k - 1, s_i, s_j;
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '.') {
                ++cnt;
                s_i = i;
                s_j = j;
                grid[i][j] = 'X';
            }
        }
    }
    queue<pair<int, int>> q;
    q.emplace(s_i, s_j);
    grid[s_i][s_j] = '.';
    while (cnt and not q.empty()) {
        auto [r, c] = q.front(); q.pop();
        for (int k = 0; k < 4; ++k) {
            int n_r = r + d[k][0], n_c = c + d[k][1];
            if (valid(n_r, n_c) and grid[n_r][n_c] == 'X') {
                grid[n_r][n_c] = '.';
                q.emplace(n_r, n_c);
                --cnt;
                if (cnt == 0)
                    break;
            }
        }
    }
    for (int i = 0; i < n; ++i)
        cout << grid[i] << '\n';
    return 0;
}