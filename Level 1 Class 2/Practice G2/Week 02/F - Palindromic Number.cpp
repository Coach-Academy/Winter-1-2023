#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;

    int lastDigit = s % 10;
    s /= 100;
    int firstDigit = s;

    if(lastDigit == firstDigit)
        cout<<"Yes\n";
    else cout<<"No\n";
}
