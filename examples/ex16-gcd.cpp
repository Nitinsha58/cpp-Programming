#include<iostream>
using namespace std;

int main(){

    int num1, num2, smaller, hcf;
    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;

    if (num1 < num2){
        smaller = num1;
    }else {
        smaller = num2;
    }

    for (int i = 1; i <= smaller; i++){
        if (num1 % i == 0 && num2 % i == 0){
            hcf = i;
        }
    }
    cout << "HCF is: " << hcf;

    return 0;
}