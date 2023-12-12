#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        string a,b;
        cin >> a >> b;
        int aa[30]={};
        int bb [30] = {};
        for (int i = 0; i < n; ++i) {
            aa[a[i] - 'a']++;
            bb[b[i] - 'a']++;
        }
        string ans = "Yes";
        for (int i = 0; i < 26; ++i) {
            int dif = aa[i] - bb[i];
            if  ( dif < 0  || dif%k )
            {
                    ans = "No";
                    break;
            }
            aa[i+1] += dif;
        }
        cout << ans << endl;
    }

    return 0;
}