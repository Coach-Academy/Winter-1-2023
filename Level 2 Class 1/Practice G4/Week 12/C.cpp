#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            mp[x%m]++;
        }
        int cnt = 0;
        for (int i = 0; i < m; ++i) {
            int rem = i , com = (m-i)%m;
            int mn = min(mp[rem] , mp[com]);
            if ( mn > 0)
            {
                cnt++;
                mp[rem] -=mn;
                mp[com] -=mn;
            }
            if ( mp[rem] > 0)
            {
                cnt += ( mp[rem] - 1);
                if ( mn == 0)
                    cnt++;
                mp[rem] =0;
            }
            else if ( mp[com] > 0)
            {
                cnt += (mp[com] -1);
                if ( mn == 0)
                    cnt++;
                mp[com] = 0;
            }
            mp[com] = mp[rem] = 0;
        }
        cout << cnt << endl;
    }
    return 0;
}