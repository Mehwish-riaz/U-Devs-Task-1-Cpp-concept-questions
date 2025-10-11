#include <iostream>
using namespace std;

void printHello(int n) {
    int i = 1;
    do {
        cout << "Hello World" << endl;
        i++;
    } while (i <= n);
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    printHello(N);
    return 0;
}

