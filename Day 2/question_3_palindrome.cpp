#include<iostream>
using namespace std;

int main () {
    cout << "----Check If A Number Is Palindrome!---- \n";

    cout << "Enter Number \n";
    int n;
    cin >> n;
    int sum = 0;
    int temp = n;

    while (temp > 0){

        int digit = temp % 10 ;
        sum = sum *10 + digit;
        temp = temp /10;
    }

    if ( n == sum ){
        cout << "Entered Number Is A Palindrome Number";
    }
    else {
        cout << "Enter Number Is Not A Palindrome Number";
    }

}