#include<bits/stdc++.h>

#define ll long long
#define el '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   int t =1;
   //cin >> t;
    while (t--) {
       int n;
       cin >> n;
       int a[n];
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if ( a[i] == 1)
            v.push_back(i);
        }
        if ( v.size() == 0)
            cout << 0 << endl;
        else if ( v.size() == 1)
            cout << 1 << endl;
        else
        {
            ll ans  =1;
            for (int i = 0; i < v.size()-1; ++i) {
                ans *=  1ll*(v[i+1] - v[i]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}