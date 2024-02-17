/*
 * Problem: E - R2D2 and Droid Army
 * Solution using Two Pointers and Sparse Table
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, P = 17;

int LOG[N];

void prepare() {
    for (int i = 2; i < N; ++i)
        LOG[i] = LOG[i / 2] + 1;
}

struct {
    int st[P][N];
    void build(vector<int> &type) {
        for (int i = 0; i < type.size(); ++i)
            st[0][i] = type[i];
        for (int p = 1; (1 << p) <= type.size(); ++p)
            for (int i = 0; i + (1 << p) <= type.size(); ++i)
                st[p][i] = max(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
    }
    int operator()(int l, int r) {
        int p = LOG[r - l + 1];
        return max(st[p][l], st[p][r - (1 << p) + 1]);
    }
} st[5];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    prepare();
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
        st[j].build(types[j]);
    int ans = 0, ans_i, l = 0, r = 0;
    for (; r < n; ++l) {
        if (r < l) r = l;
        for (; r < n; ++r) {
            int sum = 0;
            for (int j = 0; j < m; ++j)
                sum += st[j](l, r);
            if (k < sum)
                break;
        }
        if (ans < r - l) {
            ans = r - l;
            ans_i = l;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (ans == 0) {
            cout << "0 ";
        } else {
            cout << st[j](ans_i, ans_i + ans - 1) << ' ';
        }
    }
    return 0;
}