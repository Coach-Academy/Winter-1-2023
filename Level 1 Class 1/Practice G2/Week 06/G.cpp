#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long

int main() {
    TEKA
    int n,m,mn=1e7;
    cin>>m>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=m-1;i<n;i++){
        mn=min(mn,arr[i]-arr[i-(m-1)]);
    }
    cout<<mn;
    return 0;
}