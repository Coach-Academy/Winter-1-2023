#include <bits/stdc++.h>
using namespace std;
#define TEKA ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);


int main()
{
    TEKA
    int n, s,p,q;
    char t;
    cin >> n >> s;
    map<int, int> buy, sell;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> p >> q;
        if( t == 'S')
            sell[p]+=q;
        else
            buy[p]+=q;
    }
    if(!sell.empty()){
        auto it =sell.begin();
        for(int cnt=0;cnt<s&&it!=sell.end();it++,cnt++);
        it--;
        for(;it!=sell.begin();it--){
            cout<<"S "<<it->first<<" "<< it->second <<"\n";
        }
        cout<<"S "<<it->first<<" "<< it->second <<"\n";
    }
    if(!buy.empty()){
        int cnt=0;
        for(auto it=buy.rbegin();cnt<s&& it!=buy.rend();it++,cnt++){
            cout<<"B "<<it->first<<" "<< it->second <<"\n";
        }
    }

    return 0;
}
