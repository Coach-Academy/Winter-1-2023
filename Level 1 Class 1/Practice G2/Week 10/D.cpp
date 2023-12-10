#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--){
        string s;
        cin>>s;
        if(mp[s] == 0)
            cout<<"OK\n";
        else
            cout<<s<<mp[s]<<"\n";

        mp[s]++;
    }
    return 0;
}
