#include<iostream>
using namespace std;

int main(){

    int num, digit, new_num=0;
    cout << "Enter num: ";
    cin >> num;

    while (num){
        digit = num % 10;

        num = num / 10;
        cout << digit;

        new_num = new_num*10 + digit;
    }

    cout<<"\n";
    cout<<"New Num: "<<new_num;


    return 0;
}