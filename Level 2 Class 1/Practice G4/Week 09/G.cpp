#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
vector<int> p;
bool np[(int) 1e6+7];
void pre()
{
    for (int i = 2; i <= 1e6 ; ++i) {
        if ( np[i] == 0)
        {
            p.push_back(i);
            for (ll j = 1ll * i*i; j <= 1e6; j+=i) {
                np[j] = 1;
            }
        }
    }
}
void solve()
{
    pre();
    int n,m;
    cin >> n >> m;
    int a[n][m];
    ll sum = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            int nxtprime = *lower_bound(p.begin(), p.end(), x);
            a[i][j] = nxtprime - x;
        }
    }
    for (int i = 0; i < n; ++i) {
        ll tmp =0;
        for (int j = 0; j < m; ++j) {
            tmp+=a[i][j];
        }
        sum = min( sum, tmp);
    }
    for (int i = 0; i < m; ++i) {
        ll tmp =0;
        for (int j = 0; j < n; ++j) {
            tmp += a[j][i];
        }
        sum = min( sum , tmp);
    }
    cout << sum << endl;
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