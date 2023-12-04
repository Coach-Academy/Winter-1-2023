#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int pf[(int) 1e6+7];
vector<int> k[11];
void pre()
{
    for (int i = 2; i <= 1e6; ++i) {
        if ( pf[i] == 0)
        {
            for (int j = i; j <= 1e6 ; j+=i) {
                pf[j] ++;
            }
        }
    }
    for (int i = 1; i <= 1e6 ; ++i) {
        k[ pf[i] ].push_back(i);
    }
}
void solve()
{
    int a,b,n;
    cin >> a >> b >> n;
    int r = upper_bound(k[n].begin(),  k[n].end(),b) - k[n].begin() -1; // idx
    int l = lower_bound(k[n].begin(),  k[n].end(),a) - k[n].begin();
    int len = r-l+1;
    cout << len << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    pre();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}