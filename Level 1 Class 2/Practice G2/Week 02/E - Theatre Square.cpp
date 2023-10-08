#include <iostream>

using namespace std;

int main() {
    long long height, width, sizeOfFlagstone;
    cin >> height >> width >> sizeOfFlagstone;
    long long numberOfFlagstonesInHeight = height / sizeOfFlagstone;
    long long numberOfFlagstonesInWidth = width / sizeOfFlagstone;

    if (height % sizeOfFlagstone)
        numberOfFlagstonesInHeight++;
    if (width % sizeOfFlagstone)
        numberOfFlagstonesInWidth++;

    cout << numberOfFlagstonesInHeight * numberOfFlagstonesInWidth << endl;

}
