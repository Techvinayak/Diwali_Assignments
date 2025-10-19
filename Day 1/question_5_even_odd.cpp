#include<iostream>
using namespace std;

int main() {
    cout << "----Check If a Number is Even or Odd!----\n";

    int num;
    cout << "Enter A Number: ";
    cin >> num;

    // Check if number is divisible by 2
    if (num % 2 == 0) {
        cout << num << " is an Even number.";
    } else {
        cout << num << " is an Odd number.";
    }

    return 0;
}
