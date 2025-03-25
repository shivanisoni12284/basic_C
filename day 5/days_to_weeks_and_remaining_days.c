// Write a C program to convert a given number of days into weeks and remaining days.

#include<stdio.h>
int main()
{
    int days,weeks,rem_days;
    printf("enter the number of days: ");
    scanf("%d",&days);
    weeks=days/7;
    rem_days=days%7;
    printf("total no. of weeks in %d days = %d\n",days,weeks);
    printf("the remaining days = %d\n",rem_days);
    return 0;

}







