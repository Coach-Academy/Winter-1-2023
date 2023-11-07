#include <bits/stdc++.h>

using namespace std;

using ll = long long;
char grid[8][8];

int go(int r = 0)
{
    if (r == 8) return 0;
    int ret = 2e9, ic;
    for (int c = 0; c < 8; c++) {
        if (grid[r][c] == 'Q') ic = c;
    }
//    cout << r << ' ' << ic << '\n';
    for (int c = 0; c < 8; c++) {
        bool ok = true;
        for (int r2 = r-1; ~r2; r2--) {
            if (grid[r2][c] == 'Q') ok = false;
        }
        for (int r2 = r-1, c2 = c-1; ~r2 && ~c2; r2--, c2--) {
            if (grid[r2][c2] == 'Q') ok = false;
        }
        for (int r2 = r-1, c2 = c+1; ~r2 && c2 < 8; r2--, c2++) {
            if (grid[r2][c2] == 'Q') ok = false;
        }
        if (ok) {
            grid[r][ic] = '.';
            grid[r][c] = 'Q';
            ret = min(ret, go(r+1)+(c != ic));
            grid[r][c] = '.';
            grid[r][ic] = 'Q';
        }
    }
    return ret;
}

int main() {
    int cur, tc = 1;
    while(cin >> cur) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                grid[i][j] = '.';
            }
        }
        grid[0][cur-1] = 'Q';
        for (int i = 1; i < 8; i++) {
            cin >> cur;
            grid[i][cur-1] = 'Q';
        }
        cout << "Case " << tc++ << ": ";
        cout << go() << '\n';
    }
    return 0;
}
