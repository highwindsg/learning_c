#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    string name; // Declaring var 'name' as a string.
    string address; // Declaring var 'address' as a string.

    cout << "Enter your name: "; // Print out a line to ask user to enter their name.
    /* The getline() func will take in all numbers or characters entered in a string.
    And parse in two params of 'cin' to store in the user's input into var 'name' */
    getline(cin, name);

    cout << "Please enter your full mailing address: ";
    getline(cin, address);

    cout << "Hello " << name << endl;
    cout << "And you address is " << address << endl;

    return 0;
    
} 