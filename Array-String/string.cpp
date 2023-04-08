#include<iostream>
using namespace std;

void display(char *);
void display(string);

int main(){

    // Declaring a string object

    // // Method 1 (C style)
    // char str[100];
    // cout << "Enter a String: ";
    // cin >> str;
    // cout << "You entered: " << str << endl;

    // // Method 2 (cin.get())
    // char str[100];
    // cout  << "Enter a String: ";
    // cin.get(str, 100);

    // cout << "You entered: " << str << endl;

    // // Method 3 (cin.get())
    // string str;
    // cout  << "Enter a String: ";
    // getline(cin, str);

    // cout << "You entered: " << str << endl;

    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);

    return 0;
}


void display(char s[]){
    cout << "Entered char array is: " << s << endl;
}

void display(string s){
    cout << "Entered string is: " << s << endl;
}