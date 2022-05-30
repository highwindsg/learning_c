#include <iostream>

using namespace std;


int main()
{

    bool isMale = false; // Creating a var isMale of type boolean.
    bool isTall = false; // Creating a var isTall of type boolean.

    //if(isMale && isTall){ // The condition inside the if() parentheses is isMale AND isTall.
    //if(isMale || isTall){ // The condition inside the if() parentheses is isMale OR isTall.
    if(isMale && isTall) { // The condition inside the if() parentheses is isMale AND isTall. False AND False is False.
        cout << "You are a tall male." << endl;
    } else if(isMale && !isTall) {      // False AND Not False is False.
        cout << "You are a short male." << endl;
    } else if(!isMale && isTall) {      // Not False AND False is False.
        cout << "You are tall but not a male." << endl;
    } else {
        cout << "You are not a male and not tall." << endl;
    }


    return 0;
}

/*

Boolean AND / && :

true && true is true
true && false is false
false && true is false
false && false is false

Boolean OR / || :

true || true is true
true || false is true
false || true is true
false || false is false

*/
