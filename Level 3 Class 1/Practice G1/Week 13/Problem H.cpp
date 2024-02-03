// H - Correct Placement
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int n, h[N], w[N], I[N], ans[N];

void test_case() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> h[i] >> w[i];
        I[i] = i;
        if (w[i] < h[i])
            swap(h[i], w[i]);
    }
    sort(I, I + n, [](int i1, int i2) {
        return tie(h[i1], w[i1]) < tie(h[i2], w[i2]);
    });
    int i = 0, j = 0, tmp_mn_i = -1, mn_i = -1;
    while (i < n) {
        for (; j < n and h[I[i]] == h[I[j]]; ++j);
        for (; i < j; ++i) {
            if (~mn_i and w[mn_i] < w[I[i]]) {
                ans[I[i]] = mn_i + 1;
            } else {
                ans[I[i]] = -1;
            }
            if (tmp_mn_i == -1 or w[tmp_mn_i] > w[I[i]])
                tmp_mn_i = I[i];
        }
        if (mn_i == -1 or (~tmp_mn_i and w[tmp_mn_i] < w[mn_i]))
            mn_i = tmp_mn_i;
    }
    for (int i = 0; i < n; ++i)
        cout << ans[i] << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        test_case();
    }
    return 0;
}