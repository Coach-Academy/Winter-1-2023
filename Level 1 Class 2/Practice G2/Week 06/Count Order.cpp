#include <iostream>
#include <algorithm>

using namespace std;

bool isEqual(int arr[], int target[], int n) {
    for (int i = 0; i < n; ++i)
        if (arr[i] != target[i])
            return false;

    return true;
}

void resetPermutation(int permutation[], int n) {
    for (int i = 1; i <= n; ++i)
        permutation[i - 1] = i;
}

int doNextPermutation(int arr[], int n) {
    int permutation[n];
    
    resetPermutation(permutation, n);
    
    int index = 0, position = 0;
    do {
        if (isEqual(arr, permutation, n)) {
            position = index;
            break;
        }
        index++;
    } while (next_permutation(permutation, permutation + n));
    
    return position;
}

void input(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
}


int main() {
    int n;
    cin >> n;
    int p[n], q[n];

    input(p, n);
    input(q, n);

    int posP = doNextPermutation(p, n);
    int posQ = doNextPermutation(q, n);

    cout << abs(posP - posQ) << endl;
}
