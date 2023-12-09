// Include the header file for the fundamentals module.
#include "fundamentals.h"

// Define a macro to prevent the compiler from showing warnings related to secure C functions. this is often used in Visual Studio to bypass warnings about older C functions.
#define _CRT_SECURE_NO_WARNINGS

// Specify buffer sizes for reading numeric and string inputs; BUFFER_SIZE is used for reading strings generally, and NUM_INPUT_SIZE is used for reading strings specifically.
#define BUFFER_SIZE     80
#define NUM_INPUT_SIZE  10

/* Version 1 */
//>> insert here

// Implementation of the fundamentals function.
// This function demonstrates how to work with string indexing in C.
void fundamentals(void) {
    // Print a start message for this specific demonstration.
    printf("*** Start of Indexing Strings Demo ***\n");

    // Declare two arrays to hold string inputs: one for general input, another for the position.
    char buffer1[BUFFER_SIZE]; // To hold the user's string input.
    char numInput[NUM_INPUT_SIZE]; // To hold the user's position input as a string.
    size_t position; // To store the converted position input as a number.

    // Use a do-while loop to repeatedly prompt for input until the user types 'q' to quit.
    do {
        // Prompt the user to type a string and read the input into buffer1.
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        // Remove the newline character from the end of the input string to clean it up.
        buffer1[strlen(buffer1) - 1] = '\0';

        // Check if the user wants to exit the demo.
        if (strcmp(buffer1, "q") != 0) {
            // Prompt the user to enter the character position within the string.
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            // Correct the ending of the input string by removing the newline character.
            numInput[strlen(numInput) - 1] = '\0';

            // Convert the position input from a string to an integer.
            position = atoi(numInput);

            // Ensure the position is within the bounds of the string.
            // If the position is too large, reduce it to the maximum available index in the string.
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }

            //To show indexing, output the character that was located at the given location.
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0); // Continue the loop until 'q' is entered.

// Print a final message to indicate that the demo has come to a close.
    printf("*** End of Indexing Strings Demo ***\n\n");
    
    //V2
    // Display the start message of the demo to the user.
    printf("*** Start of Measuring Strings Demo ***\n");

    // Initialize a buffer to hold the string input from the user.
    char buffer2[BUFFER_SIZE];

    // Enter a loop that continues until the user decides to exit by typing 'q'.
    do {
        // Prompt the user to type a string or 'q' to quit the demo.
        printf("Type a string (q - to quit):\n");

        // Read the user's input string from the standard input and store it in buffer2.
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Overwrite the newline character that fgets includes in the input with a null terminator.
        buffer2[strlen(buffer2) - 1] = '\0';

        // Check if the input is not the quit command ('q').
        if (strcmp(buffer2, "q") != 0) {
            // If it's not 'q', print the length of the string provided by the user. Cast the result of strlen to int to match the format specifier.
            printf("The length of \'%s\' is %d characters\n", 
            buffer2, (int)strlen(buffer2));
        }
        // Continue the loop until the comparison between buffer2 and "q" is not zero (i.e., until the user enters 'q').
    } while(strcmp(buffer2, "q") != 0);

    // Once the loop is exited, print an end message for the demo.
    printf("*** End of Measuring Strings Demo ***\n\n");
    
}



  


