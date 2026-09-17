#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to convert password based on Rules 1, 2, and 3
string convertPassword(string password) {
    // Rule 1 & Rule 2: Replace vowels with 'X' and numbers with 'Z'
    for (size_t i = 0; i < password.length(); i++) {
        char upperChar = toupper(password[i]);
        if (upperChar == 'A' || upperChar == 'E' || upperChar == 'I' || 
            upperChar == 'O' || upperChar == 'U') {
            password[i] = 'X';
        } else if (isdigit(password[i])) {
            password[i] = 'Z';
        }
    }

    // Rule 3: Reverse all characters
    int left = 0;
    int right = password.length() - 1;
    while (left < right) {
        swap(password[left], password[right]);
        left++;
        right--;
    }

    return password;
}

int main() {
    // Advanced36 modification: Prompt setup
    string password;
    char letter;

    cout << "Enter a 5-letter word: "; // Line 21 requirement
    cin >> password;

    cout << "Enter a letter: ";       // Line 33 requirement
    cin >> letter;

    // Convert string and character to uppercase
    for (size_t i = 0; i < password.length(); i++) {
        password[i] = toupper(password[i]);
    }
    letter = toupper(letter);

    // Apply password rules
    string convertedPassword = convertPassword(password);

    cout << "\nOriginal (Uppercase): " << password << endl;
    cout << "Converted Password: " << convertedPassword << endl;

    return 0;
}


