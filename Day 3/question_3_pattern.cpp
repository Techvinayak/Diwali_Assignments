#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl; 
    }

    return 0;
}
