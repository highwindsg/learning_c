#include <iostream>
#include <cmath> // Importing the cmath module for some mathematical calculations.


using namespace std;

int main()

{
    cout << pow(2, 5) << endl; // Using the power() func and parse in two params for 2^5 (2 to the power of 5).
    cout << sqrt(36) << endl; // Using the square root func and parse in one num param.
    cout << round(4.4) << endl; // Rounding down to the nearest whole num.
    cout << round(4.7) << endl; // Rounding up to the nearest whole num.
    cout << ceil(6.3) << endl; // Ceiling func will round up to the next whole num.
    cout << floor(3.9) << endl; // Floor func will round down to the next whole num.
    cout << fmax(3, 10) << endl; // fmax() func will give back the bigger maximum number.
    cout << fmin(3, 10) << endl; // fmin() func will give back the smaller minimum number.
    return 0;
}