#include<iostream>
using namespace std;

int main(){

    char c;
    cout << "Enter character: ";
    cin >> c;


    if (!isalpha(c)) {
        printf("Error! Non-alphabetic character.");
    }
    else if (
        c == 'a' ||
        c == 'e' ||
        c == 'i' ||
        c == 'o' ||
        c == 'u' ||
        c == 'A' ||
        c == 'E' ||
        c == 'I' ||
        c == 'O' ||
        c == 'U'
    ) {
        printf("Character is a vowel");
    }else {
        printf("Character is not a vowel");
    }

    return 0;
}