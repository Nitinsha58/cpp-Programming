#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter num: ";
    cin >> num;

    if (num % 2 == 0){
        printf("The number is even: ");
    }else {
        printf("Number is odd");
    }

    return 0;
}