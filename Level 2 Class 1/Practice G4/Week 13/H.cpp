#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork() {
    ll n,r,avg;
    cin >> n >> r>> avg;
    vector<pair<ll,ll> > v(n);
    ll sum =0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i].second >> v[i].first;
        sum += v[i].second;
    }
    sort(v.begin(),  v.end());
    avg *= n;
    ll ans =0;
    for (int i = 0; i < n; ++i) {
        ll need = min( r- v[i].second ,max( 0ll, avg - sum));
        sum += need;
        ans += ( v[i].first * need);
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}