#include<iostream>
using namespace std;

int main() {
    cout << "----Generate Fibonacci Series Up To n Numbers!----\n";

    int n; 
    cout << "Enter how many numbers you want in the series: ";
    cin >> n; 

    // First two numbers of Fibonacci series
    int first = 0, second = 1;


    cout << "Fibonacci Series: ";

    // If n == 1 print only the first number
    if (n == 1) {
        cout << first;
    }
    // If n >= 2 print both first and second numbers
    else if (n >= 2) {
        cout << first << "\t" << second << "\t";

        // Loop starts from the 3rd term
        for (int i = 3; i <= n; i++) {
            int next = first + second; 
            cout << next << "\t";
            first = second;
            second = next;
        }
    }
    return 0;
}
