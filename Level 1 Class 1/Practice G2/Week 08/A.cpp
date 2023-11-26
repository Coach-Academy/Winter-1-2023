#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    cout<<"1 "<<v[0]<<"\n";  // G1 -ve
    if(v[n-1]==0){
        cout<<"2 "<<v[1]<<" "<<v[2]<<"\n";
        cout<< n-3<<" ";
        for(int i=3;i<n;i++)cout<<v[i]<<" ";
    }
    else{
        cout<<"1 "<<v[n-1]<<"\n";
        cout<< n-2<<" ";
        for(int i=1;i<n-1;i++)cout<<v[i]<<" ";
    }
    cout<<'\n';

    return 0;
}

