#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    ll n;
    while (true) {
        cin >> n;
        if ( n == 0)
            break;
        map<ll, int> mp;
        for (ll i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                mp[i]++;
                n /= i;
            }
        }
        if (n > 1)
            mp[n]++;

        for (auto &i: mp) {
            cout << i.first << "^" << i.second << " ";
        }
        cout << endl;
    }
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