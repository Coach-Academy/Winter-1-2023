#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long

int main() {
    TEKA
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mn=arr[0],mx=arr[0],cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            cnt++;
            mx=arr[i];
        }
        if(arr[i]<mn){
            cnt++;
            mn=arr[i];
        }
    }
    cout<<cnt;

    return 0;
}