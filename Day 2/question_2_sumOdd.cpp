#include<iostream>
using namespace std;

int main(){
    cout << "----Sum Of First n Odd Numbers!----\n" ;

    cout << "Enter Number You Want Addition Of Odd Number Till \n ";
    int n;
    int sum = 0;
    cin >> n;

    for ( int i = 1 ; i<=n ; i++){
        if( i % 2 != 0 ){
            sum = sum +i;
        }
    }

    cout << "The Sum Of Odd Number Till " << n << " is : " << sum;
    cout << endl;
}