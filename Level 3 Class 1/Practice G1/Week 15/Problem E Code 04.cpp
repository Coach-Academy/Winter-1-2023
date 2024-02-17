/*
 * Problem: E - R2D2 and Droid Army
 * Solution using Two Pointers and multiset
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> types[5];
    for (int i = 0; i < n; ++i) {
        for (int a, j = 0; j < m; ++j) {
            cin >> a;
            types[j].push_back(a);
        }
    }
    multiset<int> ms[5];
    int ans = 0, ans_i, l = 0, r = 0;
    for (int j = 0; j < m; ++j)
        ms[j].insert(types[j][0]);
    for (; r < n; ++l) {
        if (r < l) {
            r = l;
            for (int j = 0; j < m; ++j)
                ms[j].insert(types[j][r]);
        }
        while (r < n) {
            int sum = 0;
            for (int j = 0; j < m; ++j)
                sum += *ms[j].rbegin();
            if (k < sum)
                break;
            ++r;
            if (n <= r)
                break;
            for (int j = 0; j < m; ++j)
                ms[j].insert(types[j][r]);
        }
        if (ans < r - l) {
            ans = r - l;
            ans_i = l;
        }
        for (int j = 0; j < m; ++j)
            ms[j].erase(ms[j].find(types[j][l]));
    }
    for (int j = 0; j < m; ++j) {
        if (ans == 0) {
            cout << "0 ";
        } else {
            int mx = 0;
            for (int l = ans_i, r = ans_i + ans; l < r; ++l)
                mx = max(mx, types[j][l]);
            cout << mx << ' ';
        }
    }
    return 0;
}