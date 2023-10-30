#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int st = a[n/2], en = 2e9;
    while (st <= en) {
        int mi = (1LL*st+en)/2;
        ll ops = 0;
        for (int i = n/2; i < n; i++) {
            if (i+1 < n && mi > a[i+1]) {
                ops+=1LL*(a[i+1]-a[i])*(i-n/2+1);
            }
            else {
                ops+=1LL*(mi-a[i])*(i-n/2+1);
                break;
            }
        }
        if (ops <= k) st = mi+1;
        else en = mi-1;
    }
    cout << st-1 << '\n';
    return 0;
}
