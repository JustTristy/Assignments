
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
// Include the header file for the converting module.
#include "converting.h"


//V1
// Version 1 of the converting function demonstrates converting strings to integers.
void converting(void) {
    // Print a start message for this specific demonstration.
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare a buffer to store the string input from the user.
    char intString[BUFFER_SIZE]; // Ensure BUFFER_SIZE is defined, e.g., #define BUFFER_SIZE 80
    // Declare a variable to hold the converted integer.
    int intNumber;

    // Continuously execute the loop until the user decides to quit.
    do {
        // Prompt the user to type a string representing an integer and read the input.
        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);
        // Replace the newline character at the end of the input string with a null terminator.
        // This is necessary because fgets includes the newline character in the buffer.
        intString[strlen(intString) - 1] = '\0';

        // Check if the user wants to quit the demo.
        if (strcmp(intString, "q") != 0) {
            // Convert the string to an integer using the atoi function.
            // atoi converts a character array to an integer.
            intNumber = atoi(intString);

            // Output the result of the conversion.
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0); // Continue until 'q' is entered.

    // Print an end message for the demo, signaling its conclusion.
    printf("*** End of Converting Strings to int Demo ***\n\n");

    // V2
    // Print the introductory message for the double conversion demonstration.
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE]; // Ensure BUFFER_SIZE is defined, e.g., #define BUFFER_SIZE 80
    double doubleNumber;

    do {
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);
        doubleString[strlen(doubleString) - 1] = '\0';

        if (strcmp(doubleString, "q") != 0) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);

    printf("*** End of Converting Strings to double Demo ***\n");

    
}

