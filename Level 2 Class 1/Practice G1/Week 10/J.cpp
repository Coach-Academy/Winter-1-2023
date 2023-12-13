#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    map< int , ll > mp;
    ll ans  = 0;
    int n , k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if ( x%k == 0)
            continue;
        int rem =  k - (x%k);
        if ( mp[rem] == 0)
        {
            mp[rem] = 1+rem;
            ans = max(mp[rem] , ans);
        }
        else
        {
            mp[rem] += k;
            ans = max(mp[rem] , ans);
        }
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}