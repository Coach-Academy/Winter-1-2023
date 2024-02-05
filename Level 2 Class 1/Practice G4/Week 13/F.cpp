#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
   int n;
   cin >> n;
   vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),  v.end());
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        if (v[i].second >= cnt)
            cnt = v[i].second;
        else
            cnt = v[i].first;
    }
    cout << cnt << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
   // cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}