#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long

int main() {
    TEKA
    int mx=0,cur=0;
    int n;
    cin>>n;
    int ent,ext;
    for(int i=0;i<n;i++){
        cin>>ext>>ent;
        cur-=ext;
        cur+=ent;
        mx=max(mx,cur);
    }
    cout<<mx;
    return 0;
}