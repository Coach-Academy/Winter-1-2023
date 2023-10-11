// Problem Url: https://vjudge.net/problem/CodeForces-1353B

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--){
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater < int > ());
        for(int i = 0; i < n; i++){
            if(k > 0 && b[i] > a[i])
                swap(a[i], b[i]), k--;
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << '\n';
    }
    return 0;
}