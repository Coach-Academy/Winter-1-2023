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
    while(t--)
    {
         int n;
         cin >> n;
         int a[n];
         long double sum =0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a,a+n);
        long double fa = a[n-1] , fb = sum - a[n-1];
        long double ans = fa + (fb)/(1.0*n-1);
        cout << fixed << setprecision(6) << ans << endl;

    }

    return 0;
}