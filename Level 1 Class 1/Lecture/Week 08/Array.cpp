// Problem URL: https://vjudge.net/problem/CodeForces-300A

#include <iostream>
#include <vector>

using namespace std;

#define sz(x) ((int)x.size())

void print(vector < int >& v){
    cout << v.size() << " ";
    for(int i = 0; i < sz(v); i++)
        cout << v[i] << " ";
    cout << '\n';
}

int main(){
    int n;
    cin >> n;
    // pos * pos = pos
    // neg * neg = pos
    // pos * neg = neg
    // zero * any = zero
    vector < int > pos, neg, zero;
    for(int i = 0, x; i < n; i++){
        cin >> x;
        if(x > 0) pos.push_back(x);
        else if(x < 0) neg.push_back(x);
        else zero.push_back(x);
    }
    if(pos.empty()){ // two negative are positive
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size() % 2 == 0){ // positive case
        zero.push_back(neg.back());
        neg.pop_back();
    }
    print(neg);
    print(pos);
    print(zero);
    return 0;
}