// Problem Url: https://vjudge.net/problem/CodeForces-509A

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    
    for(int col = 0; col < n; col++)
        arr[0][col] = 1;
    
    for(int row = 0; row < n; row++)
        arr[row][0] = 1;

    for(int row = 1; row < n; row++)
        for(int col = 1; col < n; col++){
            arr[row][col] = arr[row - 1][col] + arr[row][col - 1];
        }
    // last element in the bottom right (max element)
    cout << arr[n - 1][n - 1] << '\n';
    return 0;
}