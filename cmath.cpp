#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "what is the radius of your circle?: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << area;


    return 0;
}