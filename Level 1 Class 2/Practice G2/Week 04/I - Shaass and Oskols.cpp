#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int wire, bird;
        cin >> wire >> bird;
        wire--;

        int right = arr[wire] - bird, left = bird - 1;
        if (wire + 1 < n)
            arr[wire + 1] += right;
        if (wire - 1 >= 0)
            arr[wire - 1] += left;
        arr[wire] = 0;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}
