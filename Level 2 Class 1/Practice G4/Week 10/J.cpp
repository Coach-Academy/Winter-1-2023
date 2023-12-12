#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        map<int,ll> mp;
        ll mx =0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if ( x%k )
            {
                ll nxt = ( k - x%k);
                if ( mp[nxt] > 0)
                {
                    ll tmp = mp[nxt]+k;
                    mp[nxt] = tmp;
                    mx = max( mx , tmp);
                }
                else
                {
                    mp[nxt] = nxt;
                    mx = max( mx , nxt);
                }
            }
        }
        if ( mx != 0)
            mx++;

        cout << mx << endl;
    }
    return 0;
}