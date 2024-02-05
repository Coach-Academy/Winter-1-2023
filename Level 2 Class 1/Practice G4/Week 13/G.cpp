#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork() {
    int n, k;
    cin >> n >> k;
    deque<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());;
    ll sum = 0;
    deque<int> w(k);
    for (int i = 0; i < k; ++i) {
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    while (w.size() && w.front() == 1)
    {
        sum += a.back()*2;
        a.pop_back();
        w.pop_front();
    }
    while (w.size())
    {
        sum += a.back();
        sum += a.front();
        a.pop_front();
        a.pop_back();
        int gifts = w.back()-2;

        w.pop_back();

        while (gifts--)
        {
            a.pop_front();
        }
    }

    cout << sum << endl;
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