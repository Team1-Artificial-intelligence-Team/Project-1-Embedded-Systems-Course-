#include <stdio.h>
#include "functions.h"

int main()
{
    int choice;

    logo();
    printf("\n");
    strcntr("", 100);
    printf("\n");
    strcntr("Enter your choice 1-ascending 2-desending:", 100);
    printf("\n");
    strcntr("", 100);
    printf("\n");


    scanf("%d",&choice);
    printf("\n");
    
    // Define user input array
    int array[9];
    int *ptr = array;

    // Function to scan the array
    input(ptr);

    // Function to sort the array and print
    switch (choice)
    {
    case 1:
        sortA(ptr);
        break;
    case 2:
        sortD(ptr);
        break;

    default:
        strcntr("Wrong choice ... please choose 1 or 2", 100);
        break;
    }


    
    return 0;
}