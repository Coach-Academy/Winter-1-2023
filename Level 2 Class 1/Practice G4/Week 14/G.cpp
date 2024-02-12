#include<bits/stdc++.h>

#define ll long long
#define el '\n'
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
        int g = 0;
        sort(a,a+n);
        for (int i = 0; i < n; ++i) {
            g = __gcd( g , a[i]- a[0]);
        }
        if ( g == 0)
            cout << -1 << endl;
        else
            cout << g << endl;
    }
    return 0;
}