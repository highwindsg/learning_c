#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    std::cout << "Power function" << std::endl;
    cout << pow(2, 5) << endl; // 2 raised to the power of 5.

    std::cout << "Square root function" << std::endl;
    cout << sqrt(36) << endl; // Square root of 36.
    
    std::cout << "Square root with decimal function" << std::endl;
    cout << sqrt(36.9) << endl; // Square root of 36 with decimal places.
    
    std::cout << "Round to nearest number function" << std::endl;
    cout << round(4.3) << endl; // Round to the nearest whole number.
    
    std::cout << "Round up function" << std::endl;
    cout << round(4.6) << endl; // Round-up to the next whole number.
    
    std::cout << "Round up to next ceiling number function" << std::endl;
    cout << ceil(7.1) << endl; // Round the number up to the ceiling whole integer number. 
    
    std::cout << "Round down or floor function" << std::endl;
    cout << floor(3.8) << endl; // Round down to the lowest whole integer number.
    
    std::cout << "Find the larger number function" << std::endl;
    cout << fmax(33, 10) << endl; // Return the bigger of the two numbers.
    
    std::cout << "Find the smallest number function" << std::endl;
    cout << fmin(3, 10) << endl; // Return the smaller of the two numbers.

}