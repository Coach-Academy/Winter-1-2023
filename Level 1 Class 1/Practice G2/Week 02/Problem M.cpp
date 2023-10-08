#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    double v,t,s,d;
    cin>>v>>t>>s>>d;
    double time=d/v;
    if (time <t||time>s)cout<<"Yes";
    else cout<<"No";

    return 0;
}
