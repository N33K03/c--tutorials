#include <iostream>
using namespace std;


int main() {
    int x = 10;
    int y = x++;    // x = 11, y = 10
    int z = ++x;    // Prefix, so x is incremented by 1, then stored in z
    cout << z;



    return 0;
}



// double is used for decimals instead of int