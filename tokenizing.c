// Include the header file for the tokenizing module.
#include "tokenizing.h"

// Define a macro to suppress compiler warnings about secure C functions, commonly used in Visual Studio.
#define _CRT_SECURE_NO_WARNINGS

// Define the size of the buffer to hold input strings for tokenization.
#define BUFFER_SIZE 300

// Include standard libraries needed for string handling and input/output operations.
#include <stdio.h>
#include <string.h>

// Implementation of the tokenizing function.
// This function demonstrates how to break a string into tokens based on spaces.

/* Version 1 */

void tokenizing(void) {
    // Start the tokenization demonstration.
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Declare a buffer to hold the user's input string and initialize variables.
    char words[BUFFER_SIZE]; // To hold the sentence input by the user.
    char* nextWord = NULL; // Pointer to hold the next token (word) found.
    int wordsCounter; // Counter to keep track of the number of words tokenized.

    // Continuously execute the loop until the user decides to quit.
    do {
        // Prompt the user for a sentence and read the input.
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        // Replace the newline character from the input with a null terminator.
        words[strlen(words) - 1] = '\0';

        // Check if the user wants to quit the demonstration.
        if (strcmp(words, "q") != 0) {
            // Start tokenizing the string into words based on space as delimiter.
            nextWord = strtok(words, " ");
            wordsCounter = 1; // Initialize word counter.

            // Iterate through the string to find and print each word.
            while (nextWord) {
                // Print each tokenized word along with its position in the input.
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                // Find the next word in the string.
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0); // Continue until 'q' is entered.

    // Print an end message to signify the end of the demonstration.
    printf("*** End of Tokenizing Words Demo ***\n\n");
    
    /* Version 2 */
    
/*This line uses printf to print the start message of the Tokenizing Phrases Demo to the standard output.*/
printf("*** Start of Tokenizing Phrases Demo ***\n"); 
/*This line declares an array named phrases of characters with a size of BUFFER_SIZE. It is intended to store the input phrases.*/
char phrases[BUFFER_SIZE];
/* This line declares a pointer named nextPhrase and initializes it to NULL. This pointer will be used later with the strtok function to tokenize the input phrases.*/
char* nextPhrase = NULL; 
/*This line declares an integer variable named phrasesCounter. It will be used to keep track of the number of phrases entered by the user. */
int phrasesCounter;

/*This marks the beginning of a do-while loop. The loop continues until the user types "q" to quit. */
do { 
	/*This line prompts the user to input a few phrases separated by commas. It uses printf to display the message. */
	printf("Type a few phrases separated by comma(q - to quit):\n");
	/*This line reads a line of input from the standard input (stdin) and stores it in the phrases array. It ensures that the input does not exceed the size of the array. */
	fgets(phrases, BUFFER_SIZE, stdin); 
	/*This line replaces the newline character at the end of the input string (added by fgets) with the null character ('\0'). This step is to remove the newline character, making it easier to tokenize the input. */
	phrases[strlen(phrases) - 1] = '\0'; 
	
    /*This if statement checks if the input is not equal to "q" (quit). */
	if (strcmp(phrases, "q") != 0) { 
		/*The strtok function is used to tokenize the input string (phrases). It returns a pointer to the first token (phrase) found, using "," as the delimiter.*/
		nextPhrase = strtok(phrases, ","); 
		/* Resets the phrasesCounter to 1 before entering the loop that prints each token.*/
		phrasesCounter = 1; 
		/*This while loop iterates through each token obtained by strtok.*/
		while (nextPhrase) { 
			/* Prints the current phrase along with its corresponding number (phrasesCounter). The counter is then incremented for the next iteration.*/
			printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
			/*Advances to the next token in the input string. */
			nextPhrase = strtok(NULL, ",");
		}
	}
} /*This do-while loop continues as long as the user does not input "q" to quit. */
  while (strcmp(phrases, "q") != 0);  
  /*Prints a message indicating the end of the Tokenizing Phrases Demo. */
  printf("*** End of Tokenizing Phrases Demo ***\n\n"); 
/* Version 3 */
//>> insert here

}
