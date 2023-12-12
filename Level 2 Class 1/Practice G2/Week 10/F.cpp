#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while(j < n && a[j]-a[i] <= 5) j++;
        ans = max(ans, j-i);
    }
    cout << ans << '\n';
    return 0;
}
