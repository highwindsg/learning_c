#include <iostream>

using namespace std;

int main()
{

    char grade = 'A'; // Use open & close single quote for datatype char.
    string phrase = "C++ Academy"; // Use open & close doublequotes for datatype string.
    int age = 50; // No decimal points allowed, just whole numbers.
    // For using decimals in a C++ program there are two datatypes for decimals.
    //float // Floating point numbers with decimals.
    double gpa = 2.3; // Can store more decimals points numbers.
    bool isLying = false; // Boolean stores true or false.

    cout << "My grade is " << grade << endl;
    cout << "And I studied at " << phrase << endl;
    cout << "I passed the when I was " << age << " years old" << endl;
    cout << "And with a GPA score of " << gpa << endl;
    
}