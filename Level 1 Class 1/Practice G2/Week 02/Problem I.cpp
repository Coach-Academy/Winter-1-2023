#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    int n;
    cin>>n;
    if (n>9)cout<<"Greater than 9";
    else if (n==1)cout<<"one";
    else if (n==2)cout<<"two";
    else if (n==3)cout<<"three";
    else if (n==4)cout<<"four";
    else if (n==5)cout<<"five";
    else if (n==6)cout<<"six";
    else if (n==7)cout<<"seven";
    else if (n==8)cout<<"eight";
    else cout<<"nine";


    return 0;
}
