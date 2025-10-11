#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    do {
        rev = rev * 10 + n % 10;
        n /= 10;
    } while (n != 0);
    return rev;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Reversed number = " << reverseNumber(num);
    return 0;
}

