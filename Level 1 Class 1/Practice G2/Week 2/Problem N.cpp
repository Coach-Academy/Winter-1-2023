#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    char a,b,c;
    cin>>a>>b>>c;
    if (a==b && b==c && a=='R')cout<<3;
    else if(a=='R' && b=='R')cout<<2;
    else if(c=='R' && b=='R')cout<<2;
    else if (a=='R'|| b=='R'||c =='R')cout<<1;
    else cout<<0;

    return 0;
}
