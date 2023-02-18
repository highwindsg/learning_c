#include <iostream>
using namespace std;

// To write a program to let the user guess what is the secret number.

int main()

{
    int secretNum = 7; // The answer to the secret number.
    int guess; // Declaring var guess of integer datetype.
    int guessCount = 0; /* Declaring var guessCount of integer datatype to keep track of now many
    times the user has tried to guess the secret numbers. */
    int guessLimit = 3; /* Declaring var guessLimit of integer datatype to specify how many times
    the user is allowed to guess the number until they lose. */
    bool outOfGuesses = false; /* Declaring var outOfGuesses of datatype boolean to tell us whether
    or not the user has any guesses left. Therefore if the value is false, then the user still has
    guessLimit left. */


    /* While checking the secret answer is not the correct entered guess number, as well as 
    still not outOfGuesses state, then can continue to guess. */
    while (secretNum != guess && !outOfGuesses){
        /* And if the guessCount is still less then the guessLimit, then also can still 
        continue to guess. If not, then set the boolean value to outOfGuesses to true, to 
        break out of the loop. */
        if(guessCount < guessLimit){
            cout << "Enter your guess number: ";
            cin >> guess; // Enter into the var guess the entered number.
            guessCount++; // To increate the number of times of guesses the user has tried.
        } else {
            outOfGuesses = true;
        }
    }

    /* So if the outOfGuesses boolean value of true is triggered from line 31, then output 
    the lose statement. If not, then it means the user won. */
    if(outOfGuesses){
        cout << "You Lose! Ran out of allowed guesses";
    } else {
        cout << "Correct! You Win!";
    }

    return 0;

}

