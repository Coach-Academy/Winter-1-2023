#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,x;
    cin>>n;
    vector<int>g1,g2,g3;
    for (int i = 1; i <= n; ++i) {
        cin>>x;
        if(x==1) g1.push_back(i);
        else if(x==2) g2.push_back(i);
        else g3.push_back(i);
    }
    int mn=min({g1.size(),g2.size(),g3.size()});
    cout<<mn<<"\n";
    for (int i = 0; i < mn; ++i) {
        cout<<g1[i]<<" "<<g2[i]<<" "<<g3[i]<<"\n";
    }
    return 0;
}

