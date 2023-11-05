#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    string s;
    cin>>s;
    while(!s.empty() && s.back()=='0')
        s.pop_back();
    string t=s;
    reverse(t.begin(), t.end());
    if(s==t)cout<<"Yes\n";
    else cout<<"No\n";
//    1221
//    1225221
    return 0;
}