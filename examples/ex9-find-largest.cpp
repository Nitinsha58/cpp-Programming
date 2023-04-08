#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    cout << "Enter num1, num2, num3";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3){
        printf("%d is Largest", num1);
    }else if (num2 > num1 && num2 > num3){
        printf("%d is Largest", num2);
    }else {
        printf("%d is Largest", num3);
    }

    return 0;
}