#include <iostream>
#include <string> 
using namespace std;

int main() {
    cout << "----Find the Length of the Longest String in an Array----\n";

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string arr[n];
    
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLength = 0; // variable to store length of the longest string

    
    for (int i = 0; i < n; i++) {
        int len = arr[i].length();  // find the length of current string
        if (len > maxLength) { 
            maxLength = len;
        }
    }

    cout << "The length of the longest string is: " << maxLength << endl;

    return 0;
}
