#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    count(arr, arr + n, 1) > 0 ? cout << -1 << endl : cout << 1 << endl;

}
