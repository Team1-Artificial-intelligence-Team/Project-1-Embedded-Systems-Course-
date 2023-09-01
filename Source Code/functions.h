/** 
    ┌--------------------------------┐
    | Team : 1                       |
    | Date : 8/31/2023               |
    | Project : Sort Names In Array  |
    └--------------------------------┘
*/

// Import vital libraries
#include <stdio.h>
#include <string.h>
#include <conio.h>

// Temporary variables; required for sorting later
char temp[1][30];
int cmp;

// Prototype of "logo" function
void logo();

// Body of "logo" function.
// This function prints the ASCII art program logo
void logo()
{
    printf("   _____            _     _   _                             _____                                       \n");
    printf("  / ____|          | |   | \\ | |                           |_   _|           /\\                         \n");
    printf(" | (___   ___  _ __| |_  |  \\| | __ _ _ __ ___   ___  ___    | |  _ __      /  \\   _ __ _ __ __ _ _   _ \n");
    printf("  \\___ \\ / _ \\| '__| __| | . ` |/ _` | '_ ` _ \\ / _ \\/ __|   | | | '_ \\    / /\\ \\ | '__| '__/ _` | | | |\n");
    printf("  ____) | (_) | |  | |_  | |\\  | (_| | | | | | |  __/\\__ \\  _| |_| | | |  / ____ \\| |  | | | (_| | |_| |\n");
    printf(" |_____/ \\___/|_|   \\__| |_| \\_|\\__,_|_| |_| |_|\\___||___/ |_____|_| |_| /_/    \\_\\_|  |_|  \\__,_|\\__, |\n");
    printf("                                                                                                   __/ |\n");
    printf("                                                                                                  |___/\n");
    printf("@Made By Team 1 (Fares Mostafa - Hassan Mohamed - Youssef Tamer - Youssef Walid)\n");
}


// Prototype of "input" function
void input(char names[7][30]);

// Body of "input" function
// This function inputs 7 strings (names) from user
void input(char names[7][30])
{
    printf("Enter Seven Names: ");
    printf("\n>> ");

    for (int i = 0; i < 7; i++)
    {
        // Scan name at current index
        gets(names[i]);
        fflush(stdin);
        // Convert string to lowercase
        strlwr(names[i]);


        if (i == 6)
        {
            break;
        }
        printf(">> ");
    }
}

// Prototype of "Sort_Ascending" function
void Sort_Ascending(char names[7][30]);

// Body of "Sort_Ascending" function
/* This function sorts an array of strings alphabetically (A - Z)
   and prints the result */
void Sort_Ascending(char names[7][30])
{
    for (int j = 0; j <= 6; j++)
    {

        for (int i = 0; i <= 5; i++)
        {
            cmp = strcmp(names[i], names[i + 1]);

            if (cmp == 1)
            {
                strcpy(temp[0], names[i]);
                strcpy(names[i], names[i + 1]);
                strcpy(names[i + 1], temp[0]);
            }
        }
    }
    printf("\n\nAfter Sorting:\n\n");
    for (int i = 0; i <= 7; i++)
    {
        if (i == 7)
        {
            break;
        }
        printf(">> ");
        puts(names[i]);
    }
}

// Prototype of "Sort_Descending" function
void Sort_Descending(char names[7][30]);

// Body of "Sort_Descending" function
/* This function sorts an array of strings alphabetically (Z - A)
   and prints the result */
void Sort_Descending(char names[7][30])
{
    for (int j = 0; j <= 6; j++)
    {

        for (int i = 0; i <= 5; i++)
        {
            cmp = strcmp(names[i], names[i + 1]);
            if (cmp == -1)
            {
                strcpy(temp[0], names[i]);
                strcpy(names[i], names[i + 1]);
                strcpy(names[i + 1], temp[0]);
            }
        }
    }
    printf("\n\nAfter Sorting:\n\n");
    for (int i = 0; i <= 7; i++)
    {
        if (i == 7)
        {
            break;
        }
        printf(">> ");
        puts(names[i]);
    }
}
