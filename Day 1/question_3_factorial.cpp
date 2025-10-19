#include<iostream>
using namespace std;

int main () {
    cout << "----Calculate Factorial Of A Number!---- \n";

    int n;
    int fact = 1;
    cout << "Enter Number \n" ;
    cin >> n ;


    // Multiply fact by each number from 2 up to n
    for (int i =2 ; i<=n ; i++){
        fact *= i;
    }

    cout << "The Factorial Of Number "<< n << " is : "<<fact;

}