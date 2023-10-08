#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    double n,m,a;
    cin>>n>>m>>a;
    ll x=ceil(n/a);
    ll y=ceil(m/a);
    cout<<x*y;

    return 0;
}
