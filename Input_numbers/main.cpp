#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    double age; // Declaring var 'age' as type double, to include decimal numbers.
    string country; // Declaring var 'country' as type character.

    cout << "Enter your age: "; // Print out a line to ask user to enter their age.
    cin >> age; // 'cin' and two greater than sign, will store the user's input into the var 'age'.

    cout << "Which country do you come from: ";
    cin >> country;

    cout << "You are " << age << " years old." << endl;
    cout << "And you are from " << country << "." << endl;

    return 0;

} 