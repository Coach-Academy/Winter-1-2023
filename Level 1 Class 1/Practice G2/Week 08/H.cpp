#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        int mx=0;
        for(int i=0;i<n;i++){
            int cntp=0;
            if(s[i]=='A'){
                for (int j = i+1; j < n ; ++j) {
                    if(s[j]=='A')break;
                    cntp++;
                    i=j;
                }
                mx=max(mx,cntp);
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}