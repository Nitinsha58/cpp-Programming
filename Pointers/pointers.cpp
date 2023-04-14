#include<iostream>
using namespace std;

int main(){

    // int var1 = 3;
    // int var2 = 24;
    // int var3 = 17;

    // cout << "Address of var1: " << &var1 << endl;
    // cout << "Address of var2: " << &var2 << endl;
    // cout << "Address of var3: " << &var3 << endl;


    // int var = 5;
    // int *varad = &var;

    // cout << "Var address: " << varad << endl;
    // cout << "Varad value: " << *varad;

    int num = 34;

    int *varad1 = &num;
    int **varad2 = &varad1;
    int ***varad3 = &varad2;

    cout << "varad1: " << varad1 << endl;
    cout << "varad2: " << varad2 << endl;
    cout << "varad3: " << varad3 << endl;

    cout << "*varad1: " << *varad1 << endl;
    cout << "*varad2: " << *varad2 << endl;
    cout << "*varad3: " << *varad3 << endl;

    cout << "*varad1: " << *varad1 << endl;
    cout << "**varad2: " << **varad2 << endl;
    cout << "**varad3: " << **varad3 << endl;

    cout << "*varad1: " << *varad1 << endl;
    cout << "**varad2: " << **varad2 << endl;
    cout << "***varad3: " << ***varad3 << endl;

    return 0;
}