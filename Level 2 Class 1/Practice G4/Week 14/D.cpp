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
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int gcd = 0;
        for (int i = 0; i < n; ++i) {
            int idx = -1 , tmp = 1;
            for (int j = 0; j < n; ++j){
                if ( a[j] == -1)
                    continue;
                if ( __gcd(gcd , a[j]) >= tmp)
                {
                    tmp = __gcd(gcd , a[j]);
                    idx = j;
                }
            }
            gcd = tmp;
            cout << a[idx] << " ";
            a[idx] = -1;
        }
        cout << endl;
    }
    return 0;
}