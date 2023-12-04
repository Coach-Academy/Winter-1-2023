#include <bits/stdc++.h>
using namespace std;
#define TEKA ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,x,k,q;
    vector<string>v;
    priority_queue<int,vector<int>,greater<int>>pq;
    cin>>q;
    string s;

    while(q--){
        cin>>s;
        if(s=="insert"){
            cin>>n;
            pq.push(n);
            v.push_back(s+" "+ to_string(n));
        }
        else if(s=="removeMin"){
            if(!pq.empty())
                pq.pop();
            else
                v.push_back("insert 1");
            v.push_back(s);
        }
        else{
            cin>>n;
            while (!pq.empty() && pq.top() < n){
                pq.pop();
                v.push_back("removeMin");
            }
            if( pq.empty() || pq.top() !=n ){
                pq.push(n);
                v.push_back("insert "+ to_string(n));
            }
            v.push_back(s+" "+ to_string(n));
        }
    }
    cout<<v.size()<<"\n";
    for(auto it:v){
        cout<<it<<"\n";
    }

    return 0;
}