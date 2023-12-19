#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string grid[2];
    for (auto &i : grid) cin >> i;
    int best = 2e9;
    pair<int, int> p;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            int mx = 0;
            for (int ii = 0; ii < 2; ii++) {
                for (int jj = 0; jj < n; jj++) {
                    if (grid[ii][jj] == '1') {
                        if (i == ii) mx = max(mx, abs(jj-j));
                        else mx = max(mx, jj+j+k+2);
                    }
                }
            }
            if (mx < best) best = mx, p = {!i+1, j+1};
        }
    }
    cout << best << '\n' << p.first << ' ' << p.second << '\n';
    return 0;
}
