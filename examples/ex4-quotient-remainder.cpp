#include<iostream>
using namespace std;

int main(){
    
    int num, divisor, quotient, remainder;

    cout << "Enter num and divisor: ";
    cin >> num >> divisor;
    quotient = num / divisor;
    remainder = num % divisor;
    
    cout << "Remainder: " << remainder << " Quotient: " << quotient;

    return 0;
}