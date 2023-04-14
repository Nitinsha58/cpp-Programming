#include<iostream>
using namespace std;

class Count {
    private:
    int value;

    public:
        // Constructor to initialize count to 5
        Count() : value(5) {}

        Count operator ++ (){
            Count temp;
            temp.value = ++value;
            return temp;
        }
        Count operator ++ (int){
            Count temp;
            temp.value = value++;
            return temp;
        }

        void display(){
            cout << "Count: " << value << endl;
        }
};


// Binary Operator Overloading
class Complex {
    private:
        float real;
        float imag;
    
    public:
        Complex () : real(0), imag(0) {}

        void input(){
            cout << "Enter real and imaginary parts respectively: ";
            cin >> real;
            cin >> imag;
        }

        Complex operator + (const Complex& obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void output(){
            if (imag < 0)
                cout << "Output Complex number: " << real << imag << "i";
            else
                cout << "Output Complex number: " << real << "+" << imag << "i";
        }
};

int main(){
    Count count1, result;

    // Call the "void operator ++ ()" function
    ++count1;
    count1.display();

    count1++;
    count1.display();

    result = ++count1;
    result.display();

    // Binary Operator Overloading
    Complex complex1, complex2, result1;

    cout << "Enter first complex number: \n";
    complex1.input();

    cout << "Enter second complex number: \n";
    complex2.input();

    result1 = complex1 + complex2;
    result1.output();

    return 0;
}