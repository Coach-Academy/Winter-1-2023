#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    int n,m;
    cin>>n>>m;
    if(m==0)cout<<"Gold";
    else if(n==0)cout<<"Silver";
    else cout<<"Alloy";
    return 0;
}
