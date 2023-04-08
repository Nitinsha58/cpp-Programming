#include<iostream>
using namespace std;

int main(){

    int num1 = 5, num2 = 7;

    cout << "Before Swap: " << endl;
    cout << "num1: " << num1 << " num2: " << num2 << endl;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = num1;

    cout << "After Swap: " << endl;
    cout << "num1: " << num1 << " num2: " << num2 << endl;

    return 0;
}