#include <iostream>

using namespace std;

int main()
{

    string phrase = "Giraffe Academy";

    cout << "Giraffe Academy\n"; // a '\n' will print out a new line.
    cout << phrase.length() << endl; // a '<< endl' will also means end line and start a new line.
    cout << phrase[0] << endl; // slicing on the first index which starts with 0 is letter G.
    cout << "Hello" << endl;

    cout << phrase;


    return 0;
}