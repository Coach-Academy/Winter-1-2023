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
        ll n;
        cin >> n;
        vector<int> v;
        int idx2 = -1;
        while(n)
        {
         int rem = n%3;
         v.push_back(rem);
         n/=3;
         if (rem == 2)
             idx2 = v.size()-1;
        }
        if ( idx2 != -1)
        {
            v.push_back(0);
            for (int i = idx2; i <v.size(); ++i) {
                if ( v[i] == 0)
                {
                    for (int j = 0; j < i; ++j) {
                        v[j] = 0;
                    }
                    v[i] = 1;
                    break;
                }
            }
        }
        ll p = 1,ans =0;
        for (int i = 0; i < v.size(); ++i) {
            if ( v[i] == 1)
                ans +=p;
            p*=3;
        }
        cout << ans << endl;

    }

    return 0;
}