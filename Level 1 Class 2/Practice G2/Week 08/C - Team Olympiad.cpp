#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int> arr[3];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        t--;
        arr[t].push_back(i);
    }
    int teams = min({arr[0].size(), arr[1].size(), arr[2].size()});
    cout << teams << endl;
    while (teams--) {
        cout << arr[0].front() + 1 << ' ';
        cout << arr[1].front() + 1 << ' ';
        cout << arr[2].front() + 1 << '\n';
        arr[0].pop_front();
        arr[1].pop_front();
        arr[2].pop_front();
    }
}
