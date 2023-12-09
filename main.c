// Disable warnings for non-secure C functions in Visual Studio to allow using standard library functions without warnings.
#define _CRT_SECURE_NO_WARNINGS

// Include header files for each module of the program, which contain the declarations for the module functions.
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

// The entry point of the program.
int main(void)
{
    // Buffer to hold the user's menu selection.
    char buff[10];

    // Repeat the menu prompt until the user chooses to exit.
    do
    {
        // Present options to the user corresponding to each module demonstration.
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        // Ask the user to choose which module to run.
        printf("Which module to run? \n");
        
        // Read the user's selection from standard input into the buffer.
        fgets(buff, 10, stdin);

        // Determine the action based on the first character of the user's input.
        switch (buff[0])
        {
            // If '1' is entered, call the fundamentals module function.
            case '1': fundamentals();
                      break;
            // If '2' is entered, call the manipulating module function.
            case '2': manipulating();
                      break;
            // If '3' is entered, call the converting module function.
            case '3': converting();
                      break;
            // If '4' is entered, call the tokenizing module function.
            case '4': tokenizing();
                      break;
        }
    // Continue to display the menu until '0' is entered to exit.
    } while (buff[0] != '0');

    // Return 0 to indicate successful completion of the program.
    return 0;
}
