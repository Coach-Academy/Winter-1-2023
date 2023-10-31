#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long


int main() {
    TEKA
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mn_idx=0,mx_idx=0,mn=arr[0],mx=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=mn){
            mn=arr[i];
            mn_idx=i;
        }
        if(arr[i]>mx){
            mx=arr[i];
            mx_idx=i;
        }
    }
    int ans=mx_idx + (n - mn_idx-1);
    if(mx_idx > mn_idx)ans--;
    cout<<ans<<"\n";

    return 0;
}