#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll tmp = n;
    map<ll, int> mp;
    for (ll i = 2; i*i <= n ; ++i) {
        while (n%i == 0)
        {
            mp[i]++;
            n/=i;
        }
    }
    if ( n > 1)
        mp[n]++;
    ll prime = 0;
    for(auto &i : mp)
    {
        if ( i.second > mp[prime])
        {
            prime = i.first;
        }
    }
    int k = mp[prime];
    cout << k << endl;
    for (int i = 0; i < k-1; ++i) {
        cout << prime << " ";
        tmp /= prime;
    }
    cout << tmp << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}