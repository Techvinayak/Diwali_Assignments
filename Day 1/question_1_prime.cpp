//Check If A Number Is Prime.

#include<iostream>
using namespace std;

int main (){
    cout << "----Check If Number Is Prime Or Not!---- \n";

    int num;
    bool isPrime=true;  //Assume That The Number Is Prime.
    cout << "Enter A Number \n";
    cin >> num;

    if ( num <= 1) // Check If The Number is 1, 0 or Negative
    {
        isPrime = false;
    }
    

    for (int i = 2 ; i <= num/2 ; i++)
    {
        if ( num % i == 0)  //If Entered Number Is Divisible By I'th number that change Isprime to False and break the loop.
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)  //If IsPrime is True than entered number is a Prime Number
    {
        cout << "True : The Enter Number Is A Prime Number " << num;
    }
    else{       //Else IsPrime is False than entered number is Not a Prime Number
        cout << "False : The Enter Number Is Not A Prime Number " << num;
    }
    

    return 0;
    
}