#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--)
    {
       int r1 ,c1 ,r2,c2;
       cin >> r1 >> c1 >> r2 >> c2;
       int rock = (r1 != r2) + (c1!= c2);
       int bishop;
       if (abs(r1-r2)%2 != abs(c1-c2)%2)
           bishop = 0;
       else
           bishop = 1 + (abs(r1-r2) != abs(c1-c2));
       int king = max(abs(r1-r2), abs(c1-c2));
       cout << rock << " " <<  bishop << " " << king << endl;

    }

    return 0;
}