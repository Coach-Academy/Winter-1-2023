//https://vjudge.net/contest/585426#problem/F
#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int years = 0;
    int a,b;cin>>a>>b;
    while(a<=b){
        years++;
        a*=3;
        b*=2;
    }
    cout<<years;
    return 0;
}







