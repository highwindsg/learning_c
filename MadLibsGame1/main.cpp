#include <iostream>
#include <cmath>


using namespace std;

int main()

{
    
    // Creating three vars of type string.
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color); // Using getline() func to parse in two params of 'cin' and 'color' value.

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun); // Using getline() func to parse in two params of 'cin' and 'pluralNoun' value.

    cout << "Enter a celebrity's name: ";
    getline(cin, celebrity); // Using getline() func to parse in two params of 'cin' and 'celebrity' value.


    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;

}