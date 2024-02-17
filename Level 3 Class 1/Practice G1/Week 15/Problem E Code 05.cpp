/*
 * Problem: E - R2D2 and Droid Army
 * Solution using Two Pointers and Max Queue (2 Max stack)
 */
#include <bits/stdc++.h>
using namespace std;

struct Q {
    stack<pair<int, int>> in_s, out_s;
    void push(int x) {
        if (in_s.empty()) {
            in_s.emplace(x, x);
        } else {
            in_s.emplace(x, max(x, in_s.top().second));
        }
    }
    int mx() {
        int _mx = 0;
        if (not in_s.empty())
            _mx = in_s.top().second;
        if (not out_s.empty())
            _mx = max(_mx, out_s.top().second);
        return _mx;
    }
    void pop() {
        if (out_s.empty()) {
            out_s.emplace(in_s.top().first, in_s.top().first);
            in_s.pop();
            for (; not in_s.empty(); in_s.pop())
                out_s.emplace(in_s.top().first, max(out_s.top().second, in_s.top().first));
        }
        out_s.pop();
    }
};

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
    Q qs[5];
    int ans = 0, ans_i, l = 0, r = 0;
    for (int j = 0; j < m; ++j)
        qs[j].push(types[j][0]);
    for (; r < n; ++l) {
        if (r < l) {
            r = l;
            for (int j = 0; j < m; ++j)
                qs[j].push(types[j][r]);
        }
        while (r < n) {
            int sum = 0;
            for (int j = 0; j < m; ++j)
                sum += qs[j].mx();
            if (k < sum)
                break;
            ++r;
            if (n <= r)
                break;
            for (int j = 0; j < m; ++j)
                qs[j].push(types[j][r]);
        }
        if (ans < r - l) {
            ans = r - l;
            ans_i = l;
        }
        for (int j = 0; j < m; ++j)
            qs[j].pop();
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