#include<iostream>
using namespace std;

void test(){
    printf("\nTest Function \n");
}

int main(){
    int year;
    cout << "Enter Year: ";
    cin >> year;

    if (year % 4 == 0){
        if (year % 400 == 0){
            printf("Leap Year");
        }else {
            printf("Leap Year");
        }
    }else {
        printf("Not a Leap Year");
    }
    test();

    return 0;
}