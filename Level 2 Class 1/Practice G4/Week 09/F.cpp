#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int mod = 1e9 + 7, N = 5e5+7;
bool prime[N];
vector<int> v;
void pre()
{
    for (int i = 2; i <= N ; ++i) {
        prime[i] = 1;
    }
    for (int i = 2; i < N ; ++i) {
        if ( prime[i]) {
            for (ll j = 1ll * i * i; j < N; j += i) {
                prime[j] = 0;
            }
            v.push_back(i);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << v[n-1] << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    pre();
    //cout << v.size() << endl;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}