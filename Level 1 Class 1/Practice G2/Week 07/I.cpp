#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]+arr[1]<=d || arr[n-1] <=d)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}