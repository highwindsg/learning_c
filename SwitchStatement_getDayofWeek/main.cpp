#include <iostream>
using namespace std;

string getDayofWeek(int dayNum){ // Create string func named getDayofWeek with one param of dayNum of type Integer.
    string dayName; // Create a string var of dayName.

    switch(dayNum){ // Create a switch case with dayNum as param since we are using the number to point to a day.
    case 0:
        dayName = "Sunday";
        break; // So if the number entered matches, then C++ will stop the sequential reading of the other lines.
    
    case 1:
        dayName = "Monday";
        break;

    case 2:
        dayName = "Tuesday";
        break;

    case 3:
        dayName = "Wednesday";
        break;

    case 4:
        dayName = "Thursday";
        break;

    case 5:
        dayName = "Friday";
        break;

    case 6:
        dayName = "Saturday";
        break;

    default:
        dayName = "Invalid day mumber entered.";
        //break;
    }

    return dayName; // To return the string value of dayName, and parse it back to the func.
}

// The main program below.
int main()
{

    cout << getDayofWeek(40); // Func call getDayofWeek and parse in a param of 4.
    return 0;

}
