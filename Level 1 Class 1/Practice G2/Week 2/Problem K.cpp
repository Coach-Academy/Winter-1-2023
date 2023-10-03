#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    ll n,k,x;
    cin>>n>>k;
    x=ceil((double)n/2.0);
    if (k<=x){// odd
        cout<<(k*2)-1;
    }
    else 
        cout<<(k-x)*2;

    return 0;
}
