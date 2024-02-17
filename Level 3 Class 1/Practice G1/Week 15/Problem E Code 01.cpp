/*
 * Problem: E - R2D2 and Droid Army
 * Solution using Binary Search and Segment Tree
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

struct {
    int seg[4 * N];
    void build(int l, int r, int x, vector<int> &type) {
        if (l == r) {
            seg[x] = type[l];
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1, type);
        build(m + 1, r, 2 * x + 2, type);
        seg[x] = max(seg[2 * x + 1], seg[2 * x + 2]);
    }
    int query(int l, int r, int x, int ql, int qr) {
        if (qr < l or r < ql)
            return 0;
        if (ql <= l and r <= qr)
            return seg[x];
        int m = (l + r) / 2;
        auto ans1 = query(l, m, 2 * x + 1, ql, qr);
        auto ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return max(ans1, ans2);
    }
} seg[5];

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
    for (int j = 0; j < m; ++j)
        seg[j].build(0, n - 1, 0, types[j]);
    int ans = 0, ans_i;
    for (int i = 0; i < n; ++i) {
        int l = i, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            int sum = 0;
            for (int j = 0; j < m; ++j)
                sum += seg[j].query(0, n - 1, 0, i, mid);
            if (k < sum) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (ans < l - i) {
            ans = l - i;
            ans_i = i;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (ans == 0) {
            cout << "0 ";
        } else {
            cout << seg[j].query(0, n - 1, 0, ans_i, ans_i + ans - 1) << ' ';
        }
    }
    return 0;
}