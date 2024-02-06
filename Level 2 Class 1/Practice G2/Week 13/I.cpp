#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n, x; cin >> n >> x;
    vector <int> a(n);
    bool fnd = false;
    for (auto &i : a) {
        cin >> i;
        if (i == x) fnd = true;
    }
    if (!fnd) n++, a.push_back(x);
    sort(a.begin(), a.end());
    int i, j;
    for (i = (n-1)/2; ~i; i--) {
        if (a[i] == x) break;
    }
    for (j = (n-1)/2; j < n; j++) {
        if (a[j] == x) break;
    }
    int ans = 2e9;
    if (i != -1) {
        int R = n-i-1;
        int L = i+1;
        ans = min(ans, !fnd+max(0, R-L));
    }
    if (j != n) {
        int L = j;
        int R = n-1-j;
        ans = min(ans, !fnd+max(0, L-R));
    }
    cout << ans << '\n';
    return 0;
}
