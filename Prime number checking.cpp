#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    int i = 2;
    while (i < n) {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isPrime(num))
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}

