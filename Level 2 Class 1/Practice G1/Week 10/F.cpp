#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(),  v.end());
    int ans =0;
    for (int i = 0; i < n; ++i) {
        int l = i;
        int r  = std::upper_bound(v.begin(), v.end(), v[i]+5) - v.begin()-1;
        int len = (r- l +1 );
        ans = max(ans , len);
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