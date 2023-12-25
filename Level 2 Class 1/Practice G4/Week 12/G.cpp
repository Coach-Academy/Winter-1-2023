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
    int n,m;
    cin >> n  >> m;
    int a[n][m],b[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            b[i][j] =0;
        }
    }
    vector<pair<int,int>> v;
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < m-1; ++j) {
            if ( a[i][j]  + a[i+1][j] + a[i][j+1]+a[i+1][j+1] == 4)
            {
                v.push_back({i+1,j+1});
                b[i][j] =  b[i+1][j] = b[i][j+1]=b[i+1][j+1] = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ( a[i][j] != b[i][j])
            {
                cout << -1 << endl;
                return  0;
            }
        }
    }
    cout << v.size() << endl;
    for(auto it : v)
        cout << it.first << " " << it.second << endl;
    return 0;
}