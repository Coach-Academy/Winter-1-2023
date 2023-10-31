#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    long long  c[n], a[n], b[n], sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        c[i] = a[i] - b[i];
        sum += a[i];
    }
    sort(c, c + n);
    reverse(c, c + n);
    for (int i = 0; i < n && sum > m; ++i) {
        ans++;
        sum -= c[i];
    }
    if(sum>m)ans=-1;
    cout << ans;
    return 0;
}