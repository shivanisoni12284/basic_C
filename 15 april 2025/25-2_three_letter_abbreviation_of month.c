// Write a C program to print the three-letter abbreviation of a month when given its numerical value.

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
            printf("jan");
            break;
        case 2:
            printf("feb");
            break;  
        case 3:
            printf("mar");
            break; 
        case 4:
            printf("apr");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("jun");
            break;
        case 7:
            printf("jul");
            break;
         case 8:
            printf("aug");
            break;    
         case 9:
            printf("sep");
            break;    
         case 10:
            printf("oct");
            break;    
         case 11:
            printf("nov");
            break;    
         case 12:
            printf("dec");
            break;    
         default:
            printf("Invalid input");
    }
    return 0;
}



    