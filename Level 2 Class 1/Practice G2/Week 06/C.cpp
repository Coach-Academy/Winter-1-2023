#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = n;
    for (int l = 0, r = (n+1)/2; r < n; r++) {
        if (2*a[l] <= a[r]) l++, ans--;
    }
    cout << ans << '\n';
    return 0;
}
