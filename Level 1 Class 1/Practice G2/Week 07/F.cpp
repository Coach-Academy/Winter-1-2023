#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,ans=0;
    string s;
    cin>>n>>s;
    for (int i = 1; i < n; ++i) {
        if(s[i]==s[i-1])
            ans++;
    }
    cout<<ans;
    return 0;
}

