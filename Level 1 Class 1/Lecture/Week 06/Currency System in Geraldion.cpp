// Problem URL: https://vjudge.net/problem/CodeForces-560A

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if(arr[0] == 1)
        cout << -1 << '\n';
    else
        cout << 1 << '\n';
    return 0;
}