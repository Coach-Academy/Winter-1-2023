#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    vector<ll> v;
    cin >> n;
    for (ll i = 2; i*i <= n; ++i) {
        if (n % i == 0)
        {
            v.push_back(i);
            while (n%i == 0)
                n/=i;
        }
    }
    if ( n > 1)
        v.push_back(n);
    if ( v.size() == 1)
        cout << v[0] ;
    else
        cout << 1 << endl;
    return 0;
}