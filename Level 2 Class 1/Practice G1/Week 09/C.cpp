#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int mod = 1e9+7;
map<ll,int> pf(ll n)
{
    map<ll,int> mp;
    for (ll i = 2; i*i <= n; ++i) {
        while (n%i == 0)
        {
            n/=i;
            mp[i]++;
        }
    }
    if ( n > 1)
        mp[n]++;

    return mp;
}
void solve()
{
    ll n;
    cin >> n;
    map<ll, int> mp = pf(n);
    ll prime = 0 ,k=0;
    for(auto &i : mp)
    {
        if ( i.second > mp[prime])
            prime = i.first;
    }
    k = mp[prime];
    cout << k << endl;
    for (int i = 0; i < k-1; ++i) {
        cout << prime << " ";
        n/=prime;
    }
    cout << n << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}