//https://vjudge.net/contest/588473#problem/E
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
    string s;
    getline(cin,s);
    bool vis[26] ={false};
    for(auto a:s)
        if(a>='a'&&a<='z')vis[a-'a']=true;

    int cnt =0;
    for(int i =0;i<26;i++)
        cnt+=vis[i];

    cout<<cnt<<endl;


}
