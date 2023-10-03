//https://vjudge.net/solution/45846525/G9H1GLjc4vAuJvV5WhH7
#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int a = A + B, b = A - B, c = A * B;
    if(a >= b && a >= c)
        cout << a << "\n";
    else if(b >= a && b >= c)
        cout << b << "\n";
    else 
        cout << c << '\n';
    return 0;
}
