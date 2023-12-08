#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int mod = 1073741824;
const int N = 1e6+1;
int dv[N];
void pre()
{
    int cnt =0;
    for (int i = 1; i < N ; ++i) {
        for (int j = i; j < N; j += i) {
            dv[j]++;
            cnt++;
        }
    }
}
void solve()
{
    int a,b,c;
    cin >> a>> b >> c;
    ll ans =0;
    for (int i = 1; i <= a ; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c ; ++k) {
                ans = (ans + dv[i*j*k])%mod;
            }
        }
    }
    cout << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    pre();
    while (t--)
    {
        solve();
    }
    return 0;
}