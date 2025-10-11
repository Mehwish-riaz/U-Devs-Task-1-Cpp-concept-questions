#include <iostream>
using namespace std;

void checkVoting(string name, int age) {
    cout << "User Name: " << name << endl;
    if (age >= 18)
        cout << "Eligible for voting";
    else
        cout << "Not eligible for voting";
}

int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    checkVoting(name, age);
    return 0;
}

