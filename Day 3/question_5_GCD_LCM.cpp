#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd, lcm;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int minNum = (num1 < num2) ? num1 : num2;

    // Find GCD
    for (int i = 1; i <= minNum; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Find LCM
    lcm = (num1 * num2) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
