/**
    ┌--------------------------------┐
    | Team : 1                       |
    | Date : 8/31/2023               |
    | Project : Sort Names In Array  |
    └--------------------------------┘
**/

// Import vital libraries
#include <stdio.h>
#include <string.h>
#include <conio.h>

// Import custom header file containing user-made functions
#include "functions.h"

// Main function, houses the code for the program
int main()
{
    // Define user inputs
    char names[7][30], choice_do;
    int choice;

    // Main program loop
    do
    {
        logo(); // Function from header file, prints program logo
        strcntr("", 100);
        printf("\n");
        strcntr("Pick Sorting Order (1: Ascending - 2: Descending):", 100);
        printf("\n");
        strcntr("", 100);
        printf("\n>> ");
        scanf("%d", &choice); // Input user choice for switch case
        fflush(stdin);

        switch (choice)
        {
        case 1:
            input(names);          // This function requests the user to input seven names
            Sort_Ascending(names); // This function sorts the names alphabetically from A to Z
            break;

        case 2:
            input(names);
            Sort_Descending(names); // This function sorts the names alphabetically from Z to A
            break;

        default: // In case the choice input was invalid
            printf("Invlaid Choice!!\n");
            break;
        }
        // Prompt user to start over after execution
        strcntr("", 100);
        printf("\n");
        strcntr("Do You Want Try Again ( -> Y - -> N):", 100);
        printf("\n");
        strcntr("", 100);
        printf("\n>> ");
        scanf("%c", &choice_do);
        fflush(stdin);
        
                

    } while (choice_do == 'y' || choice_do == 'Y');

    // On program ran successfully, return no error codes
    return 0;
}
