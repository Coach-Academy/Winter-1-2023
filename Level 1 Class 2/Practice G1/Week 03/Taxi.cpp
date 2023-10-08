//https://vjudge.net/contest/585426#problem/J
#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n;cin>>n;
    int taxi =0;
    int one =0,two =0,three=0;
    for(int i =0;i<n;i++){
        int a;cin>>a;
        if(a==4)taxi++;
        else a==1?one++:a==2?two++:three++;
    }
    taxi+=three;
    one =max(0,one-three);
    one +=two*2 +3;
    taxi+=one/4;

    cout<<taxi;

    return 0;
}







