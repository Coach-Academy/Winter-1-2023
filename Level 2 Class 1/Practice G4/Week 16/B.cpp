#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;
int vis[N];
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
         int n , m;
         cin >> n >> m;
         deque<int> a(n);
         int b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            vis[a[i]] = 0;
        }
        int cnt = 0;
        ll ans  = 0;
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
            if ( vis[b[i]])
                ans++,cnt--;
            else
            {
                while (a.front() != b[i])
                {
                    vis[a.front()] = 1;
                    cnt++;
                    a.pop_front();
                }
                a.pop_front();
                ans++;
                ans += cnt*2;
            }
        }
        cout << ans << endl;

    }

    return 0;
}