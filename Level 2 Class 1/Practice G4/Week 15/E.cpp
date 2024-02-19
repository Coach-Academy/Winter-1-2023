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
    while (t--)
    {
        int n,m;
        cin >>  n >> m;
        char a[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        vector<pair<pair<int,int> , pair<int,int>>> v;
        if ( a[0][0] == '1')
            cout << -1 << endl;
        else
        {
            for (int i = n-1; i >= 0; --i) {
                for (int j = m-1; j >=0 ; --j) {
                    if ( a[i][j] == '1')
                    {
                        if ( i )
                        {
                            v.push_back({{i-1, j},{i, j}});
                        }
                        else
                        {
                            v.push_back({{i,j-1},{i,j}});
                        }
                    }
                }
            }
            cout << v.size() << endl;
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i].first.first+1 << " " << v[i].first.second+1 << " ";
                cout << v[i].second.first+1 << " " << v[i].second.second+1 << endl;
            }
        }
    }

    return 0;
}