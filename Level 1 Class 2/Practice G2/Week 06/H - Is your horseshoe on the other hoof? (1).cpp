#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    int uniqe = 0;
    for (int i = 0; i < 4; ++i) {
        if (count(arr, arr + i, arr[i]) == 0)
            uniqe++;
    }
    cout << 4 - uniqe << endl;
}
