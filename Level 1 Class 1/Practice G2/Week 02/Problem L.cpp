#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    TEKA
    int x;
    cin>>x;
    if(x<40)cout<<40-x;
    else if(x<70)cout<<70-x;
    else if(x<90)cout<<90-x;
    else cout<<"expert";

    return 0;
}
