#include <iostream>
using namespace std;
// cout is output stream
// cin is input stream
int main() {
    cout << "Enter temperature in fahrenheit, to convert to celsius: ";
    double fahrenheit;
    double celsius;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * (5/9);
    cout << celsius;



    return 0;
}