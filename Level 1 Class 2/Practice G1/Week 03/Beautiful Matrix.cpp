//https://vjudge.net/contest/585426#problem/H
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int r,c;
   for(int i =0;i<5;i++){
    for(int j=0;j<5;j++){
        int cell;cin>>cell;
        if(cell==1)r=i,c=j;
    }
   }
   cout<<abs(2-r)+abs(2-c);
    return 0;
}







