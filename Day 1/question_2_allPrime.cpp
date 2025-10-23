//All Prime Numbers To n th Position

#include<iostream>
using namespace std;

int main(){
    cout << "----Generate All Prime Numbers To n Position!---- \n" ;
    
    int n;
    cout << "Enter Number You Wanted To Print Prime Number Till  \n";
    cin >> n;
    
    cout << "Prime Numbers : " ;
    for(int i = 2 ; i <=n ; i++)
    {
        bool isPrime = true;  // Assume current number is prime
            for(int j = 2 ; j <= i/2 ; j++ )
            {
                 // If i is divisible by j  it's not a prime number
                if( i % j == 0)
                {
                    isPrime = false;
                }
            }

            if(isPrime){
                cout << i << "\t";
            }
    }

    return 0;
}