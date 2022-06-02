#include <iostream>
using namespace std;

// Create a func to get the bigger number of the three numbers.
int getMax(int num1, int num2, int num3){
    int result;

    /* Using comparison operators:
    >   greater than
    <   less than
    >=  greater or equal
    <=  lesser or equal
    ==  is the same as
    !=  is not equal
    */

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }


    return result;
}


int main()
{
    cout << getMax(2, 10, 4);
    return 0;   
}