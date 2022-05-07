#include <iostream>

using namespace std;

// Create a func named cube() of datetype 'double' with a param num of datatype double.
double cube(double num){
    // Multiply the value of num three times and assign it to var result of datatype double.
    //double result = num * num * num;
    //return result; // To return the result back to the caller of the func.

    // Or just multiply num three times and return the value straightaway back to the func.
    return num * num * num;

}

int main()
{
    // Func call the cube() func with param of 5.0 and assign it to var answer of datetype double.
    double answer = cube(5.0);
    cout << answer << endl; // Output the value of var answer.
    cout << cube(5.0) << endl; // Or just output the returned value of cube(5.0) straight away.

    return 0;
}
