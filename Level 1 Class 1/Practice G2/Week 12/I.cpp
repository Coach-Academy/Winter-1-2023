#include <bits/stdc++.h>
using namespace std;
#define TEKA ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
void f(int i,int arr[],int x,int n){
    if(i == n)return;
    if(arr[i] != x ) cout<<arr[i]<<" ";
    f(i+1,arr,x,n);
}
int main() {
    TEKA
   int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    f(0,arr,x,n);

    return 0;
}