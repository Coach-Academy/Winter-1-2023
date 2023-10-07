#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    if (c == 'a' or c == 'o' or c == 'i' or c == 'u' or c == 'e')
        cout << "vowel\n";
    else
        cout<<"consonant\n";
}
