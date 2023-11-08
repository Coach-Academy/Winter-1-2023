// Problem URL: https://vjudge.net/problem/SPOJ-ADAQUEUE

#include <iostream>
#include <deque>

using namespace std;

#define sz(x) ((int)x.size())

int main(){
    bool is_rev = false;
    int q, n;
    cin >> q;
    deque < int > dq;
    while(q--){
        string order;
        cin >> order;
        if(order == "reverse")
            is_rev = !is_rev;
        if(order == "toFront"){
            cin >> n;
            (is_rev ? dq.push_back(n) : dq.push_front(n));
        }
        if(order == "push_back"){
            cin >> n;
            (is_rev ? dq.push_front(n) : dq.push_back(n));
        }
        if(order == "front"){
            if(dq.empty())
                cout << "No job for Ada?\n";
            else {
                cout << (is_rev ? dq.back() : dq.front()) << "\n";
                (is_rev ? dq.pop_back() : dq.pop_front());
            }
        }
        if(order == "back"){
            if(dq.empty())
                cout << "No job for Ada?\n";
            else {
                cout << (is_rev ? dq.front() : dq.back()) << "\n";
                (is_rev ? dq.pop_front() : dq.pop_back());
            }
        }
    }
    return 0;
}