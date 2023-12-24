#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5+1;
int a[N],p[N],x[N],n;
vector<int>v;
int f(int i){
    if (i == v.size())return INT32_MAX;
    return min(v[i],f(i+1));
}
int main() {
    TEKA
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>p[i]>>x[i];
        if (x[i]-a[i] >0)
            v.push_back(p[i]);
    }
    int ans=f(0);
    if (ans == INT32_MAX)cout<<-1;
    else
        cout<<ans;
    return 0;
}