#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int add = a + b, sub = a - b, multiplication = a * b;

    if (add >= sub and add >= multiplication)
        cout << add << endl;
    else if (sub >= add and sub >= multiplication)
        cout << sub << endl;
    else
        cout << multiplication << endl;
}
