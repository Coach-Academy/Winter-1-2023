#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    while (cin >> n)
    {
        if  ( n == 0)
            break;
        map<ll,int> mp;
        for (ll i = 2; i*i <= n; ++i) {
            while (n%i == 0)
                mp[i]++,n/=i;
        }
        if ( n > 1)
            mp[n]++;
        for(auto &i : mp)
        {
            cout << i.first << "^" << i.second << " ";
        }
        cout << endl;
    }
    return 0;
}