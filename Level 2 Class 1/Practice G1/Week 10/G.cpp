#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
  int n , k;
  cin >> n >> k;
  string a,b;
  cin >> a >> b;
  int fa[30]={}, fb[30]={};
  for (int i = 0; i < n; ++i) {
        fa [ a[i] - 'a']++;
        fb [ b[i] - 'a'] ++;
  }
    for (int i = 0; i < 26; ++i) {
        int dif = fa[i] - fb[i];
        if ( dif < 0)
        {
            cout << "No\n";
            return;
        }
        if ( dif %k !=0)
        {
            cout << "No\n";
            return;
        }
        fa[i+1] += dif;
    }
    cout << "Yes\n";

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}