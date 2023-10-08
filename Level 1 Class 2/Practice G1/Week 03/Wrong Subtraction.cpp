//https://vjudge.net/contest/585426#problem/G
#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n,k;cin>>n>>k;
    while(k--){
        if(n%10==0)n/=10;
        else n--;
    }
    cout<<n;
    return 0;
}







