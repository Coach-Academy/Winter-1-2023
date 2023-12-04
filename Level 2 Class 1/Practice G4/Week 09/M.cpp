#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    map<int,int> mp;
    for (int i = 2; i <=  n; ++i) {

        int cur = i;
        for (int j = 2; j*j <= cur ; ++j) {
            while ( cur % j == 0)
            {
                mp[j]++;
                cur /= j;
            }
        }
        if ( cur > 1)
            mp[cur]++;
    }
    ll ans = 1;
    for(auto &i : mp)
    {
        ans = (ans * (i.second+1))%mod;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}