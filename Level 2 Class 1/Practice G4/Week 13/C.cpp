#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
   int n;
   cin >> n;
   int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt = 1 ,  mx =1;
    sort(a,a+n);
    for (int i = 0; i < n; ++i) {
        if ( a[i] <= cnt)
        {
            cnt++;
            mx = cnt;
        }
        else
            cnt++;
    }
    cout << mx << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}