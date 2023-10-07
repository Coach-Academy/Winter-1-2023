#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int level = 0;
    int total = 0;
    while (total <= n) {
        level++;
        int sumOfCubes = 0;
        for (int i = 1; i <= level; ++i)
            sumOfCubes += i;
        total += sumOfCubes;
    }
    cout << level - 1 << endl;

}
