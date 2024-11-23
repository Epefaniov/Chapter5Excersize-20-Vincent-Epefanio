/*
    Assignment: Chapter 5 Excersize 20

    Programmer: Vincent Epefanio

    Date: 11/23/2024

    Requirement: Write a program that generates a random number and asks the user to guess what the number is.

    If the user’s guess is higher than the random number, the program should display “Too high, try again.”

    If the user’s guess is lower than the random number, the program should display “Too low, try again.”

    The program should use a loop that repeats until the user correctly guesses the random number.

    Once the user correctly guesses the random number, the program should display “Congratulations. You figured

    */

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time() to seed the random number generator

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userGuess;  // Variable to store the user's guess

    // Ask the user to guess the number
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Try to guess the number!" << endl;

    // Loop until the user guesses the correct number
    do {
        // Prompt the user for their guess
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Check if the guess is too high, too low, or correct
        if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }
    } while (userGuess != randomNumber);  // Continue until the user guesses correctly

    return 0;
}
