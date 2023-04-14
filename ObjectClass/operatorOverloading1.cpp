#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    
    public:
        Complex operator + (Complex& obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void input(){
            cout << "Enter real and imaginary number respectively: ";
            cin >> real; 
            cin >> imag;
        }

        void output(){
            if (imag < 0)
                cout << "Output Complex number: " << real << imag << "i" << endl;
            else
                cout << "Output Complex number: " << real << "+" << imag << "i" <<endl;
        }
};


int main(){
    Complex complex1, complex2, result;

    complex1.input();
    complex2.input();

    result = complex1 + complex2;

    result.output();
    return 0;
}