#include <iostream>
using namespace std;


int main(){
    int num, sum = 0;
    cout << "Enter Sum: ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        sum += i;
    }

    printf("Sum is: %d", sum);


    return 0;
}