#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long

void f(string &s,int n){
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        s+=c;
    }
}

int main() {
    TEKA
    int n,a,b,idx=1;
    cin>>n;
    string s,A="",B="";
    f(A,n);
    f(B,n);
    s=A;
    sort(s.begin(),s.end());
    do{
        if(A==s)a=idx;
        if(B==s)b=idx;
        idx++;

    }while(next_permutation(s.begin(),s.end()));
    cout<<abs(a-b);
    return 0;
}