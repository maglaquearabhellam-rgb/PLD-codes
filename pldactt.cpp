#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Step 1: Generate a random lowercase letter ('a' through 'z')
    char randomLetter = 'a' + rand() % 26;
    
    string input;
    char userGuess;

    // Step 4: Loop until the correct letter is guessed
    while (true) {
        cout << "Enter a single lowercase letter: ";
        cin >> input;

        // Step 2: Input validation for exactly one lowercase letter
        if (input.length() != 1 || input[0] < 'a' || input[0] > 'z') {
            cout << "Error: Please enter EXACTLY one lowercase letter (a-z).\n\n";
            continue;
        }

        userGuess = input[0];

        // Step 3: Compare guess with random letter
        if (userGuess == randomLetter) {
            cout << "You guessed the correct letter!" << endl;
            break;
        } else if (userGuess < randomLetter) {
            cout << "The letter comes AFTER '" << userGuess << "' in the alphabet.\n\n";
        } else {
            cout << "The letter comes BEFORE '" << userGuess << "' in the alphabet.\n\n";
        }
    }

    return 0;
}