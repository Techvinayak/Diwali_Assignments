#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter numbers from 0 to " << n << " (one missing):" << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Sum of numbers from 0 to n
    int total = n * (n + 1) / 2;

    int missing = sum - total;

    cout << "Missing number is: " << missing << endl;

    return 0;
}
