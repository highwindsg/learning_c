#include <iostream>

using namespace std;


int main()
{

    bool isMale = true; // Creating a var isMale of type boolean and set to true.
    bool isTall = false; // Creating a var isTall of type boolean and set to true.

    //if(isMale && isTall){ // The condition inside the if() parentheses is isMale 'and' isTall,
    if(isMale || isTall){ // The condition inside the if() parentheses is isMale 'or' isTall,
        cout << "You are a tall male." << endl;
    } else {
        cout << "You are not a tall male." << endl;
    }


    return 0;
}

