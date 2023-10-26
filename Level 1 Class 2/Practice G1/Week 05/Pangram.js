//https://vjudge.net/contest/588473#problem/K
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
    string s;
    cin>>s;
    int cnt = 0;
    bool vis[26] = {false};
    for( auto a :s){
        if(a>='a')vis[a-'a']=true;
        else vis[a-'A']=true;
    }
    for(int i =0;i<26;i++)cnt+=vis[i];




    cout<<(cnt==26?"YES":"NO")<<endl;


}
