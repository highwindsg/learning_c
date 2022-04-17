#include <iostream>


using namespace std;

int main()
{

/*
Arithmetics order of operations:  
    My      -   Multiplication first
    Dear    -   Division second
    Aunt    -   Addition third
    Sally   -   Subtraction fourth
*/
cout << 10 % 3 << endl; // 10 mod 3 means 10 divided by 3 and output the remainder.
cout << 4 + 5 * 10 << endl; // multiplication will take place first.
cout << (4 + 5) * 10 << endl; // if open & close parentheses are used, then inside the parentheses will take place first.


return 0;

}
