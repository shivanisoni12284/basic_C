// Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
// Test Data :
// Input a number between 1 to 12 to get the month name: 8
// Expected Output:
// August

#include<stdio.h>
int main()
{
    int month;
    printf("enter the month name from 1 to 12:");
    scanf("%d",&month);

    // if(month >12 && month <1)
    // {
    //     printf("enter correct input");
       
    // }
    // return 0;

    switch(month)
    {
        case 1:
            printf("january");
            break;
        case 2:
            printf("february");
            break;  
        case 3:
            printf("march");
            break; 
        case 4:
            printf("april");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("june");
            break;
        case 7:
            printf("july");
            break;
         case 8:
            printf("august");
            break;    
         case 9:
            printf("september");
            break;    
         case 10:
            printf("october");
            break;    
         case 11:
            printf("november");
            break;    
         case 12:
            printf("december");
            break;    
         default:
            printf("Invalid input");
    }
    return 0;
}







