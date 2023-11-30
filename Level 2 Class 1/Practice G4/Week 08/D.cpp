#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int mask = 0; mask < (1 << n); ++mask) {

        int sum =0;
        int mn = 1e9;
        int mx = -1e9;
        for (int i = 0; i < n; ++i) {
            if ( (1  << i) & mask)
            {
                mn = min( mn, a[i]);
                mx = max( mx , a[i]);
                sum += a[i];
            }
        }
        if  ( sum >= l && sum <= r && (mx -mn) >= x)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
