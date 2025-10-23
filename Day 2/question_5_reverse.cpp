#include<iostream>
using namespace std;

int main () {
    cout << "----Reverse A Number!---- \n";

    cout << "Enter Number \n";
    int n;
    cin >> n;
    int sum = 0;
    int temp = n;

    while (temp > 0){

        int digit = temp % 10 ;
        sum = sum *10 +digit;
        temp = temp /10;
    }

    cout << "Reversing Order Of A Number " << n << " is : " << sum;
    cout << endl; 

}