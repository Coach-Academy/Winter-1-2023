#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
map<ll,int> mp;
bool np[(int) 1e6+7];
void pre()
{
    np[1] = 1;
    for (int i = 2; i <= 1e6; ++i) {
        if ( !np[i])
        {
            mp[1ll*i*i] = 1;
            for (ll j = 1ll*i*i; j <= 1e6; j += i) {
                np[j] = 1;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    pre();
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        if ( mp[x])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}