#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    while ( true){
        cin >> n;
        if ( n == 0)
            break;
        deque<int> dq;
        for (int i = 1; i <= n; ++i) {
            dq.push_back(i);
        }
        cout << "Discarded cards:";
        while (dq.size() > 1)
        {
            cout <<" "<< dq.front();
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();
            if ( dq.size() > 1)
                cout << ",";
        }
        cout << endl;
        cout << "Remaining card: " << dq.front() << endl;
    }

    return 0;
}