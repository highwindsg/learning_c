#include <iostream>
using namespace std;

int main()
{

    printf("while loop example");
    printf("\n");

    /* Declare a var index of type integer, with a starting value of 1.
    And while the index value is less than or equal to 5, print out the value of index
    and then increment the var index by adding 1.*/
    int index = 1;
    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }

    printf("\n");
    printf("do_while loop example");
    printf("\n");

    /* Declare a new var index2 of type integer, with a starting value of 3.
    And start to do the printout of index2's value and then increment the var index2 by adding 1,
    while index2's value is still less than or equal to 5.*/
    int index2 = 6;
    do{
        cout << index2 << endl;
        index2++;
    }while(index2 <= 5);

    return 0;
    /*The value '6' still gets printed out first, because the while condition checking
    of less than or equal to 5 comes later.*/
 }