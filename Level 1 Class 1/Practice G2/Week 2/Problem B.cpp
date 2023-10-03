#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    int a,b;
    cin>>a>>b;
    int A=a+b,S=a-b,M=a*b;
    if(A>=S&&A>=M)cout<<A;
    else if(A<=S&&S>=M)cout<<S;
    else cout<<M;
    return 0;
}
