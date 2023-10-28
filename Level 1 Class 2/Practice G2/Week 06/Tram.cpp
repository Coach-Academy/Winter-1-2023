#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int exit, enter;
        cin >> exit >> enter;
        sum -= exit;
        sum += enter;
        mx = max(mx, sum);
    }
    cout << mx << endl;
}
