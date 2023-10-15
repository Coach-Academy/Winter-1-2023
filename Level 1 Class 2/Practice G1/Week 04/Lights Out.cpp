//https://vjudge.net/contest/586913#problem/K
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
    int arr[5][5]={{0,0,0,0,0}};
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=3;i++) {
        for (int j = 1; j <= 3; j++) {
            int sum = arr[i][j] + arr[i-1][j]+arr[i][j-1] +
                    arr[i][j+1]+arr[i+1][j];
            cout<<((sum%2)==0);
        }
        cout<<endl;
    }


}
