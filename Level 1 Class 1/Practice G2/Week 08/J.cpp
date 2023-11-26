#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t,n,x;
    cin>>t;
    while(t--){
        queue<int>q;
        cin>>n;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            q.push(x);
        }
        int cnt=0;
        vector<int>res(n,0);
        int i=n;
        while(i>1){
            cnt=0;
            while ( i !=q.front() ){
                q.push(q.front());
                q.pop();
                cnt++;
            }
            cnt++;
            q.pop();
            res[i-1]=cnt % i;
            i--;
        }
        for (int it: res)
            cout<<it<<" ";
        cout<<"\n";
    }

    return 0;
}