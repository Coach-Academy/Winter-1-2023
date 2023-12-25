#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
int solve(int day,int sum){
    if (sum >= n) return 0;
    return solve(day+1, sum + day)+1;
}
int main() {
    TEKA
    cin>>n;
    cout<<solve(1,0);

    return 0;
}