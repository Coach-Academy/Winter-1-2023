#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(),  a.end());
        int ans =0;
        for (int i = 0; i < n; ++i) {
            int idx = upper_bound(a.begin(),  a.end() , a[i] + 5) - a.begin() -1;
            int l = i , r = idx;
            int len = r - l +1;
            ans  = max( ans, len);

        }
        cout << ans << endl;
    }

    return 0;
}