//https://vjudge.net/contest/585426#problem/I
#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n;cin>>n;
    int cur = 0;
    for(int i=1;;i++){
        cur +=i;
        n-=cur;
        if(n<0){
            cout<<i-1;
            break;
        }
    }
    return 0;
}







