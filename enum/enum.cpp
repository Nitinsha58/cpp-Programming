#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3,
} card;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4,
};


int main() {
    week today;
    today = Wednesday;
    cout << "Day " << today + 1 << endl;

    seasons s;
    s = summer;
    cout << "Summer = " << s << endl;

    card = club;
    cout << "Size of enum variables " << sizeof(card) << " bytes.";

    int myDesign = BOLD | UNDERLINE;

    cout << endl << myDesign;

    return 0;
}

