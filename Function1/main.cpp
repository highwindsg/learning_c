#include <iostream>

using namespace std;

// void means that this function name() will not return anything.
/* Create a stub func 'sayHi' with two params 'name' of type string and 'age' of type integer.
The stub func has no body, the actual body is created below in line 28.
This method is not always recommended.
*/
void sayHi(string name, int age);

int main()
{
    // Function call the sayHi() function and parse in a string 'Mike' and integer 21.
    sayHi("Mike", 21);
    sayHi("Tom", 45);
    sayHi("Julie", 26);


    return 0;

}

/* Create a func 'sayHi' with two params 'name' of type string and 'age' of type integer.
And then output the entire string in cout.
*/
void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old." << endl;

}
