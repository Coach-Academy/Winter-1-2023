#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,d,x;
    cin>>n>>d;
    queue<int>q;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        q.push(x);
    }
    for (int i = 0; i < d; ++i) {
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}

