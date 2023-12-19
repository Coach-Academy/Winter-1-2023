#include <bits/stdc++.h>

using namespace std;

int solve(int h, int x, int y) {
    if (h <= 0)
        return 0;

    int ans;
    if (h <= y)
        ans = solve(h - y, x, y) + 1;
    else
        ans = solve(h - x, x, y) + 1;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;
        cout << solve(h, x, y) << endl;
    }
}
