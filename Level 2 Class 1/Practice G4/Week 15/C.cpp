#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mx = n;
        for (int i = 0; i < n; ++i) {
            if ( s[i] == '1')
            {  
                int before = (i+1) * 2;
                int after  = (n-i)*2;
                mx = max({mx , before , after});
            }
        }
        cout << mx << endl;
    }

    return 0;
}