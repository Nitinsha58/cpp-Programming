#include<iostream>
using namespace std;

int main(){

    int num, a = 0, b = 1, temp;
    cout << "Enter number of terms: ";
    cin >> num;

    if (num == 1){
        cout << "0 ";
    }else if (num == 2) {
        cout << "0 1 ";
    }else {
        cout << "0 1 ";
        for (int i = 1; i < num-1; i++){
            temp = b;
            b = a + b;
            a = temp;
            cout << b << " ";

        }
    }

    return 0;
}