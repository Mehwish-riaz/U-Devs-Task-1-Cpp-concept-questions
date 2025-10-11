#include <iostream>
using namespace std;

void printNumbers(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    printNumbers(N);
    return 0;
}

