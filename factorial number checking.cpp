#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Factorial = " << factorial(num);
    return 0;
}

