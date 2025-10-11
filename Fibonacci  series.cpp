#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, c, i = 1;
    while (i <= n) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}

