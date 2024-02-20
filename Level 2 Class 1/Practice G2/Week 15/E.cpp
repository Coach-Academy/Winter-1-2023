#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <string> grid(n);
        for (auto &i : grid) cin >> i;
        if (grid[0][0] == '1') {
            cout << "-1\n";
            continue;
        }
        vector <array <int, 4>> ops;
        for (int i = 0; i < n; i++) {
            for (int j = m-1; j; j--) {
                if (grid[i][j] == '1') {
                    ops.push_back({i+1, j, i+1, j+1});
                }
            }
        }
        for (int i = n-1; i; i--) {
            if (grid[i][0] == '1') {
                ops.push_back({i, 1, i+1, 1});
            }
        }
        cout << ops.size() << '\n';
        for (auto &[x1, y1, x2, y2] : ops) cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << '\n';
    }
    return 0;
}
