#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
  int n;
  cin >> n;
  int f[25] = {};
  for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      for (int j = 0; j < 25; ++j) {
                if (x &  ( 1 << j))
                    f[j]++;
      }
  }
  ll ans =0;
    for (int i = 0; i < n; ++i) {
        ll x =0;
        for (int j = 0; j < 25; ++j) {
            if ( f[j] )
            {
                f[j] -- ;
                x |= ( 1 << j);
            }
        }
        ans += x*x;
    }
    cout << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
 //   cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}