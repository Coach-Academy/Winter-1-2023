//https://vjudge.net/contest/588473#problem/I
#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        sort(s.begin(),s.end());
        char start = s[0];
        bool flag =true;
        
        for(auto a :s){
            if(a!=start){flag=false;break;}
            start++;
        }
        if(flag==true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }


}
