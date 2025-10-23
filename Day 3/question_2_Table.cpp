#include <iostream>
using namespace std;

int main() {
    int num;

    // Taking input from user
    cout << "Enter a number to print its multiplication table: \n";
    cin >> num;

    cout << "Multiplication Table of " << num << ":\n";

    // Loop to print the table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
