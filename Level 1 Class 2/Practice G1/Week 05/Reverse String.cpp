//https://vjudge.net/contest/588473#problem/J
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
    int t;cin>>t;
    while(t--){
        bool flag =false;
        string a,b;cin>>a>>b;
        for(int i =0;i<a.size();i++){
            string total="";
            for(int j =0;j<=i;j++)total+=a[j];
            for(int j =i-1;j>=0;j--)total+=a[j];
            if(total.find(b)!=-1){flag =true;
            break;
            }
        }
        if(flag==true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }


}
