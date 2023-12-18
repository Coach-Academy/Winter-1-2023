#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first;
            v[i].second = i+1;
        }
        sort( v.begin(),  v.end());
        ll sum =0,j =-1;
        vector<int> ind;
        for (int i = 0; i < n; ++i) {
            if ( j < i)
            {
                j++;
                sum += v[i].first;
            }
            while ( j!=n-1  && v[j+1].first<= sum)
            {
                sum += v[j+1].first;
                j++;
            }
            if (j == n-1)
                ind.push_back(v[i].second);
        }
        sort(ind.begin(),  ind.end());
        cout << ind.size() << endl;
        for (int i = 0; i < ind.size(); ++i) {
            cout << ind[i] << " ";
        }
        cout << endl;

    }

    return 0;
}