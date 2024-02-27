#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        int dif = 0;
        for (int i = 0; i < n; ++i) {
            if ( a[i]  != b[i])
            {
                dif = abs(a[i] - b[i]);
                for (int j = i; j < n; ++j) {
                    if ( a[j]+dif == b[j])
                        a[j]+=dif;
                    else
                        break;
                }
                break;
            }
        }
        if ( a== b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}