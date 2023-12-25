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
        ll n;
        cin >> n;
        while (true)
        {
            ll sum =0;
            string s = to_string(n);
            for (int i = 0; i < s.size(); ++i) {
                sum += ( s[i] - '0');
            }
            if (__gcd(n,sum) > 1)
            {
                cout << n << endl;
                break;
            }
            n++;
        }
    }
    return 0;
}