#include <bits/stdc++.h>
using namespace std;
#define TEKA ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,x,k;
    cin>>n;
    deque<int>d;
    priority_queue<int,vector<int>,greater<int>>pq;
    while(n--){
        cin>>x;
        if(x==1){
            cin>>k;
            d.push_back(k);
        }
        else if(x==2){
            if(!pq.empty()){
                cout<<pq.top()<<"\n";
                pq.pop();
            }
            else{

                cout<<d.front()<<"\n";
                d.pop_front();
            }
        }
        else{
            while (!d.empty()){
                pq.push(d.front());
                d.pop_front();
            }
        }
    }

    return 0;
}