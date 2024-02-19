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
    while (t--)
    {
         int n;
         cin >> n;
         vector<ll> a(n);
         ll sum =0;
         for (int i = 0; i < n; ++i) {
            cin >> a[i];
         }
         sort(a.begin(),  a.end());
        for (int i = 1; i < n; ++i) {
            a[i] += a[i-1];
        }
        for (int i = 1; i < n; ++i) {
          // ana 3ayza i red
          if ( i+i+1  > n)
          {
              cout << "NO\n";
              break;
          }
          else
          {
              ll blue = a[i];
              ll red = a[n-1] - a[n-1-i];
              if ( blue < red)
              {
                  cout << "YES\n";
                  break;
              }
          }
        }

    }

    return 0;
}