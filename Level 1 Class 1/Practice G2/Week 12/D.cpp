#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int f( int n, int k){
    if (n <= k)return 1;
    return f(n/2,k)+ f(n/2 + n % 2,k);
}

int main() {
    TEKA
    int n,k;
    while(cin>>n>>k){
        cout<<f(n,k)<<"\n";
    }
    return 0;
}
//    14 3
//    7 7
//    4 3 4 3
//    2 2 3 2 2 3
