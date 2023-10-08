//https://vjudge.net/contest/585426#problem/D
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n;cin>>n;
    int x=0;
    while(n--){
        char a,b,c;cin>>a>>b>>c;
        b=='-'?x--:x++;
    }
   cout<<x;
    return 0;
}







