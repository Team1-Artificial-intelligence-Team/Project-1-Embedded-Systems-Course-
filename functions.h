#include <stdio.h>
#include <conio.h>
#include <string.h>

int size;

// Function prototypes
void logo();
void input(int *valuePtr);
void sortA(int *valuePtr);
void sortD(int *valuePtr);
void strcntr(char string[100], int width);
// Function to scan the user input

void logo()
{
    printf("   _____            _   _                                               ______ _                           _         _    _     _               _____      _       _                \n");
    printf("  / ____|          | | (_)                 /\\                          |  ____| |                         | |       | |  | |   (_)             |  __ \\    (_)     | |               \n");
    printf(" | (___   ___  _ __| |_ _ _ __   __ _     /  \\   _ __ _ __ __ _ _   _  | |__  | | ___ _ __ ___   ___ _ __ | |_ ___  | |  | |___ _ _ __   __ _  | |__) |__  _ _ __ | |_ ___ _ __ ___ \n");
    printf("  \\___ \\ / _ \\| '__| __| | '_ \\ / _` |   / /\\ \\ | '__| '__/ _` | | | | |  __| | |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __/ __| | |  | / __| | '_ \\ / _` | |  ___/ _ \\| | '_ \\| __/ _ \\ '__/ __|\n");
    printf("  ____) | (_) | |  | |_| | | | | (_| |  / ____ \\| |  | | | (_| | |_| | | |____| |  __/ | | | | |  __/ | | | |_\\__ \\ | |__| \\__ \\ | | | | (_| | | |  | (_) | | | | | ||  __/ |  \\__ \\ \n");
    printf(" |_____/ \\___/|_|   \\__|_|_| |_|\\__, | /_/    \\_\\_|  |_|  \\__,_|\\__, | |______|_|\\___|_| |_| |_|\\___|_| |_|\\__|___/  \\____/|___/_|_| |_|\\__, | |_|   \\___/|_|_| |_|\\__\\___|_|  |___/\n");
    printf("                                 __/ |                           __/ |                                                                   __/ |                                      \n");
    printf("                                |___/                           |___/                                                                   |___/                                       \n");
}
void strcntr(char string[100], int width)
{
    // Get the length of the string.
    int len = strlen(string);

    // Print spaces to the left of the string, up to the center of the width.
    for (int i = 0; i < (width - len) / 2; i++)
    {
        printf("=");
    }

    // If the string is empty, print a space.
    if (strcmp(string, "") != 0)
    {
        printf(" ");
    }
    else if (len % 2 == 0) // If the string length is even, print two equal signs.
    {
        printf("==");
    }
    else // If the string length is odd, print one equal sign.
    {
        printf("=");
    }


    // Print the string.
    for (int i = 0; i <= len; i++)
    {
        printf("%c", string[i]);
    }
    if (strcmp(string, "") != 0)
    {
        printf(" ");
    }

    // Print spaces to the right of the string, up to the center of the width.
    for (int i = 0; i < (width - len) / 2; i++)
    {
        printf("=");
    }
}

void input(int *valuePtr) {
    printf("Enter size for array:\n");
    scanf("%d", &size);
    fflush(stdin);

    printf("Enter Array Elements:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", valuePtr+i);
        fflush(stdin);
    }
}

// This function sorts the array in ascending order
void sortA(int *valuePtr)
{
    int temp = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(*(valuePtr+j) > *(valuePtr+j+1))
            {
                temp = *(valuePtr+j);
                *(valuePtr+j) = *(valuePtr+(j+1));
                *(valuePtr+(j+1)) = temp;
            }
        }
    }
    
    printf("After sort:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", *(valuePtr+i));
    }
}

// This function sorts the array in descending order
void sortD(int *valuePtr)
{
    int temp = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(*(valuePtr+j) < *(valuePtr+j+1))
            {
                temp = *(valuePtr+j);
                *(valuePtr+j) = *(valuePtr+(j+1));
                *(valuePtr+(j+1)) = temp;
            }
        }
    }
    
    printf("After sort:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", *(valuePtr+i));
    }
}
