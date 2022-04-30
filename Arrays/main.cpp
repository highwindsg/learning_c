#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    // Creating an array named 'luckyNums[]' that contains a list of numbers.
    //int luckyNums[] = {4, 8, 15, 16, 23, 42};

    // Creating an array of named 'luckyNum[20]' that can store 20 items.
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};

    luckyNums[0] = 19; // Changing the value of index 0.
    luckyNums[10] = 100;

    cout << luckyNums[0] << endl; // print out the first index 0 from the array list of numbers, which is 4.
    cout << luckyNums[2] << endl; // print out the third index 2 from the array list of numbers, which is 15.
    cout << luckyNums[10] << endl; // print out the value of index 10 from the array list of numbers.


    return 0;
}
