#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
         cin >> v[i];
    }
    sort(v.begin(),  v.end());
    int ans  =0 ;
    while (v[(v.size()+1)/2 - 1] != k)
    {
        v.push_back(k);
        sort(v.begin(),  v.end());
        ans++;
    }
    cout << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}