// https://vjudge.net/contest/582731#problem/J
#include <iostream>
#define endl "\n"
using namespace std;
int main() {
    int n;cin>>n;
    int steps = n/5;
    n%=5;
    steps =steps + n/4;
    n= n%4;
    steps =steps + n/3;
    n= n%3;
    steps =steps + n/2;
    n= n%2;
    steps =steps + n/1;
    n= n%1;
    cout<<steps;


}
