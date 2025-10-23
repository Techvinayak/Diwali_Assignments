#include<iostream>
using namespace std;

int main () {
    cout << "----Check If A Number Is Armstrong!---- \n";

    cout << "Enter Number \n";
    int n;
    cin >> n;
    int sum = 0;
    int temp = n;

    while (temp > 0){

        int digit = temp % 10 ;
        sum = sum + digit*digit*digit;
        temp = temp /10;
    }

    if ( n == sum ){
        cout << "Entered Number Is A Armstrong Number" << n;
    }
    else {
        cout << "Enter Number Is Not A Armstrong Number" << n;
    }

}