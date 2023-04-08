#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;
    cout << "Enter coefficient(a, b, c): ";
    cin >> a >> b >> c;

    float root1, root2;

    int power = pow(b, 2);
    double d = power - 4*a*c;
    if (d > 0){
        root1 = (-b + sqrt(d))/ (2 * a);
        root2 = (-b - sqrt(d))/ (2 * a);
        printf("Root1: %f Root2: %f", root1, root2);
    }else {
        root1 = -b/2*a;
        printf("Only one Root: %f", root1);

    }

    return 0;
}