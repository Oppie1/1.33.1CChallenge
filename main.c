#include <stdio.h> // Provides functions for input/output operations (e.g., printf).
#include <ctype.h> // Provides functions to check types of characters (e.g., islower, isdigit).
#include <stdlib.h> // Provides general utility functions, though not actively used in this code.
#include <string.h> // Provides functions to work with strings (e.g., strlen).

int main()
{
    char password[50] = { 0 }; // Creates an array to hold the password, initialized to zeros.
    int low = 0, high = 0, dig = 0; // Variables to track lowercase, uppercase, and digit presence.

    printf("Please enter a strong password!  \n"); // Prints instructions for entering a password.
    printf("Your password should contain \n"); // Suggests criteria for a strong password.
    printf("Uppercase letters, lowercase letters, and numbers. \n"); // Specifies the requirements.

    // Securely reads up to 49 characters into the `password` array from user input.
    scanf_s("%49s", password, (unsigned)_countof(password));

    // Loops through each character of the entered password.
    for (int i = 0; i < strlen(password); i++)
    {
        if (islower(password[i])) // Checks if the character is lowercase.
            low = 1; // If it is, sets `low` to 1, marking that lowercase letters are present.
        if (isupper(password[i])) // Checks if the character is uppercase.
            high = 1; // If it is, sets `high` to 1, marking that uppercase letters are present.
        if (isdigit(password[i])) // Checks if the character is a digit (0-9).
            dig = 1; // If it is, sets `dig` to 1, marking that numbers are present.
    }

    // Checks whether all criteria (lowercase, uppercase, digits) are satisfied.
    if (low && high && dig)
        printf("You have entered a strong password.\n"); // If yes, prints that the password is strong.
    else
        printf("You have entered a weak password.\n"); // Otherwise, prints that the password is weak.

    return 0; // Ends the program successfully.
}
