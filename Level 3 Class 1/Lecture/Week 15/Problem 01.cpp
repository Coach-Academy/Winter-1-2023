// Potentiometers
// https://vjudge.net/problem/UVA-12086
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n, a[N];

struct {
    int seg[4 * N];
    void build(int l, int r, int x) {
        if (l == r) {
            seg[x] = a[l];
            return;
        }
        int m = (l + r) / 2;
        build(l, m, 2 * x + 1);
        build(m + 1, r, 2 * x + 2);
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    void update(int l, int r, int x, int i, int v) {
        if (l == r) {
            seg[x] = v;
            return;
        }
        int m = (l + r) / 2;
        if (i <= m) {
            update(l, m, 2 * x + 1, i, v);
        } else {
            update(m + 1, r, 2 * x + 2, i, v);
        }
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    int query(int l, int r, int x, int ql, int qr) {
        if (qr < l or r < ql)
            return 0;
        if (ql <= l and r <= qr)
            return seg[x];
        int m = (l + r) / 2;
        int ans1 = query(l, m, 2 * x + 1, ql, qr);
        int ans2 = query(m + 1, r, 2 * x + 2, ql, qr);
        return ans1 + ans2;
    }
} seg;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (int tc = 1; ; ++tc) {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        if (tc > 1)
            cout << '\n';
        cout << "Case " << tc << ":\n";
        seg.build(1, n, 0);
        cin.ignore();
        while (true) {
            string line;
            getline(cin, line);
            if (line == "END")
                break;
            stringstream ss(line);
            char o; ss >> o;
            if (o == 'M') {
                int ql, qr;
                ss >> ql >> qr;
                cout << seg.query(1, n, 0, ql, qr) << '\n';
            } else {
                int i, v;
                ss >> i >> v;
                seg.update(1, n, 0, i, v);
            }
        }
    }
    return 0;
}