#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>arr[10];

ll f(int n){
    ll mul=1;
    while(n){
        if(n%10)
            mul*=(n%10);
        n/=10;
    }
    return mul;
}

int g(int n){
    if(n<10) return n;
    return g(f(n));
}

int main() {
    TEKA
    int q;
    cin>>q;
    for (int i = 1; i <= 1e6 ; ++i) {
        arr[g(i)].push_back(i);
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int st= lower_bound(arr[k].begin(),arr[k].end(),l)-arr[k].begin();
        int end= upper_bound(arr[k].begin(),arr[k].end(),r)-arr[k].begin();
        cout<< end - st <<"\n";
    }
    return 0;
}
//
//1 -> 1 11 111
//2 -> 2 21 211 112 121 20
//3
//4
//5
//6
//7
//8
//9