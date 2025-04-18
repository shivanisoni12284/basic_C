// Write a C program to display the day of the week given a number between 1 and 7.

#include<stdio.h>
int main()
{
    int week_name;
    printf("enter the number from 1 to 7:");
    scanf("%d",&week_name);

    switch(week_name)
    {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;  
        case 3:
            printf("wednesday");
            break; 
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
    return 0;
}
    



    
    return 0;
}
    