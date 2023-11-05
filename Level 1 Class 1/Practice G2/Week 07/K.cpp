#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA

    int n,top;
    cin>>n>>top;
    int op=7-top,l,r,no=0;
    while(n--){
        cin>>l>>r;
        if(l==top||l==op||r==top||r==op)no=1;
    }
    (!no)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}