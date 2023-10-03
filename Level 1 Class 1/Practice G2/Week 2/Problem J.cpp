#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        (c==0)?cout<<"Aoki":cout<<"Takahashi";
    }
    else {
        if (a<b)
          cout<<"Aoki";
        else 
          cout<<"Takahashi";
    }
    return 0;
}
