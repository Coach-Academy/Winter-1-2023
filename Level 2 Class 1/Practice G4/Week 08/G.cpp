#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll l,r;
    int n;
    cin >> n;
    while( n--)
    {
        cin >> l >> r;
        ll ans =0;
        for (ll i = 61; i >=0 ; --i) {
            if ( (( 1ll << i) &  l) &&  ((1ll << i) & r))
                ans |= (1ll << i);
            else  if ( (( 1ll << i) &  l) ||  ((1ll << i) & r))
            {
                bool f= 1;
                for (ll j = 0; j <  i; ++j) {
                    ans |= (1ll << j);
                    f &= ((r >> j) & 1);
                }
                if ( f)
                {
                    ans = r;
                }
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
