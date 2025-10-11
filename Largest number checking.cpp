#include <iostream>
using namespace std;

int largestNumber(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Largest number is: " << largestNumber(x, y);
    return 0;
}

