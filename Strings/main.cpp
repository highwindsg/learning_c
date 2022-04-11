#include <iostream>

using namespace std;

int main()
{

    string phrase = "Giraffe Academy";

    cout << "Hello" << endl;
    cout << "Giraffe Academy\n"; // a '\n' will print out a new line.

    cout << phrase.length() << endl; // a '<< endl' will also means end line and start a new line.

    cout << phrase[0] << endl; // output the first index which starts with 0 is letter G.
    cout << phrase[2] << endl; // output the third index with 2 is letter r.

    /* To find out at which index does the word Academy begins by using the .find() method
    and parsing in the params of the word and start searching at index 0. */ 
    cout << phrase.find("Academy", 0) << endl;

    /* Using the .substr() method, substring can be used to only specify the output starting from
    index 8, and continue output the next four items including item index 8. */
    string phrasesub; // create a new string var of phrasesub.
    phrasesub = phrase.substr(8, 4); // assigning the substring output to new string var phrasesub.
    cout << phrasesub << endl;

    phrase[0] = 'B'; // replacing item index 0 with another item.

    cout << phrase;


    return 0;
}