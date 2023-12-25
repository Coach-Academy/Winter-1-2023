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
      int n;
      cin >> n;
      int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int idx = -1;
        int mx =  *max_element(a,a+n);
        for (int i = 0; i < n; ++i) {
            if ( a[i] == mx)
            {
                if ( i && a[i-1] < a[i])
                    idx = i;
                if ( i+1 < n && a[i+1] < a[i])
                    idx = i;
            }
        }
        if ( idx == -1 )
            cout << -1 << endl;
        else
            cout << idx+1 << endl;

    }
    return 0;
}