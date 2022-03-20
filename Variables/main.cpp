#include <iostream>

using namespace std;

int main()
{
    string characterName = "Tom"; // Creating a var named 'characterName' of type string, and assign a string "John" to it.
    int characterAge; // Declaring a 'characterAge' var of type 'int' (integer) for use later.
    characterAge = 50; // Assigning integer number 35 to var 'characterAge'.
    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<< characterAge << " years old" << endl;

    characterName = "Mike"; // Changing the value of var 'characterName' mid-way, no need to declare type since it is still a string.
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;
    cout << endl;



    return 0;
}