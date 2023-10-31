#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long

int main() {
    TEKA
    int n,k,x,sum=0;
    cin>>n>>k>>x;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1 , j=0 ; j<k && i>=0 ;j++,i--){
        sum-=(arr[i]-x);
    }
    cout<<sum;
    return 0;
}