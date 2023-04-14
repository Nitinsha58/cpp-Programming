#include<iostream>
using namespace std;


class Room { 
    public:
        double length;
        double breadth;
        double height;

        void initData(double len, double brth, double hgt){
            length = len;
            breadth = brth;
            height = hgt;
        }

        double calculateArea(){
            return length * breadth;
        }

        double calculateVolume(){
            return length * breadth * height;
        }
    
};


int main(){

    Room room1;
    room1.initData(42.5, 30.8, 19.2);

    // calculate and display the area and volume of the room
    cout << "Area of Room = " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;

    return 0;
}