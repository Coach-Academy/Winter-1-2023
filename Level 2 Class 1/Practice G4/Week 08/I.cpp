#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
     int ans =0;
    for (int mask = 0; mask < (1 << (n)); ++mask) {
        int cnt =0  , last = -1;
        for (int i = 0; i < n; ++i) {
            if ((1 << i) & mask)
            {
                cnt++;
                if ( last  < a[i] )
                {
                    last = a[i];
                }
                else
                    cnt = -100;
            }
        }
        ans = max( ans , cnt);
    }
    cout << ans << endl;

    return 0;
}
