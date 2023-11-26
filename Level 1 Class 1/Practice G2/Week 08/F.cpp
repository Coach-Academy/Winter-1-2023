#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n, k, x;
    cin >> n >> k;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        q.push({x, i});
    }
    while (q.size()!=1) {
        if (q.front().first > k)
            q.push({q.front().first - k, q.front().second});

        q.pop();
    }
    cout<<q.front().second;
    return 0;
}

