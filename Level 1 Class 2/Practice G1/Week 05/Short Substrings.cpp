//https://vjudge.net/contest/588473#problem/C
#include <iostream>
#include "algorithm"
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
        cout<<s[0];
        for(int i =1;i<s.size();i+=2)cout<<s[i];
        cout<<endl;
    }


}
