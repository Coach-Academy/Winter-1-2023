#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,cnt=0;
    cin>>n;
    ll x;
    priority_queue<ll>pq;
    ll sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        sum+=x;
        pq.push(-x);
        while(sum<0){
            cnt++;
            sum+=pq.top();
            pq.pop();
        }
    }
    cout<<n-cnt;
    return 0;
}